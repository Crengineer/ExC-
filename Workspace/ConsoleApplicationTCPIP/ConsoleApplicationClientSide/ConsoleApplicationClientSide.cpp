// ConsoleApplicationServerSide
//


#include <string>
#include <stdio.h>
#include <winsock2.h>
#include "stdafx.h"
#include <tchar.h>
#include <WS2tcpip.h> // To get socket connection
#include <iostream>
#include <string>

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

int main()
{
    /**************************************************************************************************************/

    // Initialize winsock

    /**************************************************************************************************************/

    string IpAddress = "127.0.0.1";
    int port = 54000;
    WSADATA wsData;                  // called when sock starts up
    WORD ver = MAKEWORD(2, 2);       // Requested to communicate the version of the socket, in this case 2.2

    int wsOk = WSAStartup(ver, &wsData);  // The WSAStartup function initiates use of the Winsock DLL by a process.

    cout << "Initialization of winsock." << endl;

    if (wsOk != 0) {
        cerr << "Can't initialize winsock. Quitting." << std::endl;
        return 0;
    }
    else {
        cout << "Initialized winsock. Code: " << wsOk << " " << endl;
        cout << "*****************************************" << std::endl;
    }

    /**************************************************************************************************************/

    // Create a socket

    /**************************************************************************************************************/

    //SOCKET ClientSocket;
    //int port = 55555;

    // Alternative from other solution:  SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
    SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); // The socket function creates a socket that is bound to a 
    //specific transport service provider.

    if (clientSocket == INVALID_SOCKET)
    {
        cerr << "Can't create a socket. Quitting." << endl;
        WSACleanup();                   //The WSACleanup function terminates use of the Winsock 2 DLL (Ws2_32.dll).
        return 0;
    }
    else {
        cout << "socket() is ok! " << endl;
        cout << "*****************************************" << std::endl;
    }


    /**************************************************************************************************************/

    // Bind an IP Address and a Port to the socket

    /**************************************************************************************************************/

    sockaddr_in clientService;  //The SOCKADDR_IN structure specifies a transport address and port for the AF_INET address 
    //family. Used to specify local or remote endpoint address in which to connect a socket

    /*    Nicholas Day code    */


    clientService.sin_family = AF_INET;
    clientService.sin_port = htons(port); // htons = Host To Network Shorts
    //clientService.sin_addr.S_un.S_addr = INADDR_ANY;  // could use also inet_pton
    inet_pton(AF_INET,IpAddress.c_str(),&clientService.sin_addr);

    /*
    clientService.sin_family = AF_INET;
    InetPton(AF_INET, _T("127.0.0.1"),&clientService.sin_addr.s_addr);
    clientService.sin_port = htons(port);
    */

    int connResult = connect(clientSocket, (sockaddr*)&clientService, sizeof(clientService));

    if (connResult == SOCKET_ERROR ) {
        cerr << "connect() Client failed: " << WSAGetLastError() << endl;
        closesocket(clientSocket);
        WSACleanup();
        return 0;
    }
    else {
        cout << "connect() by Client is OK " << endl;
        cout << "Start sending and receiving data... " << endl;

    }

    // Do-while loop to send and receive Data

    char buff[4096];
    string userInput;

    do {
        // Prompt for user to get some text
        cout << " > ";
        getline(cin, userInput);

        int sendResult = send(clientSocket, userInput.c_str(), userInput.size() + 1, 0);
        if (sendResult != SOCKET_ERROR) {
            // Wait for response
            ZeroMemory(buff,4096);
            int bytesReceived = recv(clientSocket, buff, 4096,0);
            if (bytesReceived > 0) {

                // Echo response to console

                cout << "Server " << string(buff, 0, bytesReceived) << endl;

            }
            
        }

    } while (userInput.size() > 0);

    // Close everything

    closesocket(clientSocket);
    WSACleanup();


    /*   ORIGINAL VIDEO code
    * 
    clientService.sin_family = AF_INET;
    clientService.sin_port = htons(54000); // htons = Host To Network Shorts
    clientService.sin_addr.S_un.S_addr = INADDR_ANY;  // could use also inet_pton
    */

    // Alternative
    /*
    int port = 54000;
    hint.sin_family = AF_INET;
    InetPton(AF_INET, _T("127.0.0.1"), &hint.sin_addr.s_addr);
    hint.sin_port = htons(port);


    */


    //bind(listening, (sockaddr*)&hint, sizeof(hint));  // The bind function associates a local address with a socket.

    /* 
    if (bind(listening, (sockaddr*)&clientService, sizeof(hint)) == SOCKET_ERROR) {
        cerr << "bind() failed: " << WSAGetLastError() << endl;
        closesocket(listening);
        WSACleanup();
        return 0;
    }
    else {

        cout << "bind() is ok!" << endl;
    }

    bind(listening, (sockaddr*)&hint, sizeof(hint));  // The bind function associates a local address with a socket.
    */


    /**************************************************************************************************************/

    // Tell winsock the socket is for listening

    /**************************************************************************************************************/

    /* 
    if (listen(listening, 1) == SOCKET_ERROR) {
        cout << "listen(): Error listening on socket" << WSAGetLastError() << endl;
    }
    else {
        cout << "listen() is running, waiting for connection..." << endl;
        listen(listening, SOMAXCONN); // The listen function places a socket in a state in which it is listening for an 
        //incoming connection.
        // SOMAXCONN = 0x7fffffff = number of maximum connections 
    }
    */
    /**************************************************************************************************************/

    // Wait for a connection - Creation of a socket for the client part to be implemented

    /**************************************************************************************************************/

    /*
    sockaddr_in client;
    int clientsize = sizeof(client);

    SOCKET clientSocket = accept(listening, (sockaddr*)&client, &clientsize); //The accept function permits an incoming 
    //connection attempt on a socket.

    if (clientSocket == INVALID_SOCKET) {                                     //--> implement this function in case of error
        cout << "accept() failed: " << WSAGetLastError() << endl;
        WSACleanup();
        return 0;
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
    /*
    closesocket(listening);                                     // The closesocket function closes an existing socket.
    */

    return 0;
}