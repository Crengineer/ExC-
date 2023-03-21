// ConsoleApplicationTCPIP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <WS2tcpip.h> // To get socket connection

#pragma comment (lib, "ws2_32.lib") 

/* #pragma comment (lib, libname) tells the linker to add the 'libname' library to the list of library dependencies, 
as if you had added it in the project properties at Linker->Input->Additional dependencies*/

using namespace std;

/* Operations performed:

1) Initialize winsock
2) Create a socket
3) Bind the socket to an IP Address and a Port
4) Tell winsock the socket is for listening
5) Wait for a connection
6) Close listening socket
7) While loop: accept and echo message back to client
8) Close socket
9) Cleanup winsock
*/

void main()
{
    /**************************************************************************************************************/

    // Initialize winsock

    /**************************************************************************************************************/

    WSADATA wsData;                  // called when sock starts up
    WORD ver = MAKEWORD(2, 2);       // Requested to communicate the version of the socket, in this case 2.2
    
    int wsOk = WSAStartup(ver, &wsData);  // The WSAStartup function initiates use of the Winsock DLL by a process.

    if (wsOk != 0) {
        cerr << "Can't initialize winsock. Quitting." << endl;
        return;
    }

    /**************************************************************************************************************/

    // Create a socket

    /**************************************************************************************************************/

    // Alternative from other solution:  SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
    SOCKET listening = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); // The socket function creates a socket that is bound to a 
                                                        //specific transport service provider.

    if (listening == INVALID_SOCKET)
    {
        cerr << "Can't create a socket. Quitting." << endl;
        WSACleanup();                   //The WSACleanup function terminates use of the Winsock 2 DLL (Ws2_32.dll).
        return;
    }
    else {
        cout << "socket() is ok! " << endl;
    }


    /**************************************************************************************************************/

    // Bind an IP Address and a Port to the socket

    /**************************************************************************************************************/

    sockaddr_in hint;  //The SOCKADDR_IN structure specifies a transport address and port for the AF_INET address 
                       //family. Used to specify local or remote endpoint address in which to connect a socket
    hint.sin_family = AF_INET;
    hint.sin_port = htons(54000); // htons = Host To Network Shorts
    hint.sin_addr.S_un.S_addr = INADDR_ANY;  // could use also inet_pton

    // Alternative
    /*
    int port = 54000;
    hint.sin_family = AF_INET;
    InetPton(AF_INET, _T("127.0.0.1"), &hint.sin_addr.s_addr);
    hint.sin_port = htons(port);
    
    
    */


    //bind(listening, (sockaddr*)&hint, sizeof(hint));  // The bind function associates a local address with a socket.

    if (bind(listening, (sockaddr*)&hint, sizeof(hint)) == SOCKET_ERROR) {
        cerr << "bind() failed: " << WSAGetLastError() << endl;
        closesocket(listening);
        WSACleanup();
        return;
    }
    else {

        cout << "bind() is ok!" << endl;
    }

    bind(listening, (sockaddr*)&hint, sizeof(hint));  // The bind function associates a local address with a socket.

    /**************************************************************************************************************/

    // Tell winsock the socket is for listening

    /**************************************************************************************************************/

    if (listen(listening, 1) == SOCKET_ERROR) {
        cout << "listen(): Error listening on socket" << WSAGetLastError() << endl;
    }
    else {
        cout << "listen() is running, waiting for connection..." << endl;
        listen(listening, SOMAXCONN); // The listen function places a socket in a state in which it is listening for an 
                                      //incoming connection.
                                      // SOMAXCONN = 0x7fffffff = number of maximum connections 
    }

    /**************************************************************************************************************/

    // Wait for a connection - Creation of a socket for the client part to be implemented

    /**************************************************************************************************************/

    sockaddr_in client;
    int clientsize = sizeof(client);

    SOCKET clientSocket = accept(listening, (sockaddr*)&client, &clientsize); //The accept function permits an incoming 
                                                                              //connection attempt on a socket.

    if (clientSocket == INVALID_SOCKET) {                                     //--> implement this function in case of error
        cout << "accept() failed: " << WSAGetLastError() << endl;
        WSACleanup();
        return;
    }   

    char host[NI_MAXHOST];      // Client's remote name
    char service[NI_MAXSERV];   // Service (i.e. port) the Client's connected on

    ZeroMemory(host, NI_MAXHOST);               // Fills a block of memory with zeros. - same as memset
    ZeroMemory(service, NI_MAXSERV);

    if (getnameinfo((sockaddr*)&client, sizeof(client), host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0) {

        cout << host << " connected on port: " << service << endl;
    }
    else {

        inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST); // The InetNtop function converts an IPv4 or IPv6 Internet 
                                                                //network address into a string in Internet standard format. 
                                                                //The ANSI version of this function is inet_ntop.
        cout << host << " connected on port: " << ntohs(client.sin_port) << endl; 
                                                                // The ntohs function converts a u_short from TCP/IP network byte 
                                                                //order to host byte order (which is little-endian on Intel processors).
    }

    /**************************************************************************************************************/

    // Close listening socket

    /**************************************************************************************************************/

    closesocket(listening);                                     // The closesocket function closes an existing socket.

    /**************************************************************************************************************/

    // While loop: accept and echo message back to client

    /**************************************************************************************************************/

    char buff[4096];

    while (true)
    {
        ZeroMemory(buff, 4096);

        /* Wait for Client to send data */

        int bytesReceived = recv(clientSocket, buff, 4096, 0);
        if (bytesReceived == SOCKET_ERROR) {                        // SOCKET_ERROR = -1
            cerr << "Error in recv(). Quitting." << endl;
            break;
        }

        if (bytesReceived == 0) {
            cout << "Client disconnected." << endl;
            break;
        }


        /* Echo message back to Client*/

        send(clientSocket, buff, bytesReceived + 1, 0);             //The send function sends data on a connected socket.

        
    }


    /**************************************************************************************************************/

    // Close socket

    /**************************************************************************************************************/

    closesocket(clientSocket);


    /**************************************************************************************************************/

    // Cleanup winsock

    /**************************************************************************************************************/

    WSACleanup();                          //The WSACleanup function terminates use of the Winsock 2 DLL (Ws2_32.dll).

    return;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
