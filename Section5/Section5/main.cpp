#include <iostream>

using namespace std;

int main(){
    
    int age {21};
    int height;
    int length;
    
    /*cout<< "My template" <<std::endl;
    cout << age << endl;*/
    
    cout << "Enter the height of the room: ";
    cin >> height;
    cout << "Enter the length of the room: ";
    cin >> length;
    cout << "The area of the room is: " << height*length << endl;

    
    
    
    return 0;
}