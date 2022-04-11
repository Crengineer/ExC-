#include <iostream>
#include <climits> //limits of data type like int, float, etc.

using namespace std;

int main(){
    cout<< "Size of information: " <<endl;
    
    cout << "Size of int: " << sizeof(int) << " Bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " Bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " Bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " Bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " Bytes" << endl;
    cout << "Size of short: " << sizeof(short) << " Bytes" << endl;
    return 0;
} 