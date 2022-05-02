#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    char firstName[20] {};
    char secondName[20] {};
    char fullName[50] {};
    char temp[50] {};
    
    // String insertion
    
    cout << "Insert the first name: ";
    cin >> firstName;
    cout << "\nInsert the second name: ";
    cin >> secondName;
    
    //string copy
    
    strcpy(fullName, firstName); //copy
    strcat(fullName, " ");       //concatenate
    strcat(fullName, secondName);
    
    cout << "This is my full name " << fullName << " and the length of it is: " << strlen(fullName) << endl;
    
    if(strcmp(firstName, "Marco")==0)
        cout << "\nSuch a lovely name!" << endl;
    
    int comparison = strcmp(firstName, "Marco");
    switch(comparison){
        case 0:
            cout << "\nThe name is Marco and it's right" << endl;
            break;
        case 1:
            cout << "\nThe name succeed Marco" << endl;
            break;
        case -1:
            cout << "\nThe name precedes Marco" << endl;
            break;
    }
    
    return 0;
}