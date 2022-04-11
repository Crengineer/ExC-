#include <iostream>
using namespace std;

//or

using std::cout;
using std::cin;
using std::endl;

int main(){
        
    int favouriteNumber;
    
    cout<< "Enter your favourite number between 1 and 100: ";
    
    cin >> favouriteNumber;
    
    cout << "Amazing!! The number " << favouriteNumber << " is my favourite number too!" << std::endl;
    
    return 0;
}