#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1, 0, 3};  // substring
    string s7 (10, 'X');  //Repetition of n times of ''
    
    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
    cout << s1.length() << endl; // length of the string
    
    // comparison
    if(s1 == s2){
        cout << "\ns1 is equal to s2" << endl;
    } else if(s1 > s2){
        cout << "\ns1 is greater than s2" << endl;
    } else {
        cout << "\ns1 is smaller than s2" << endl;
    }
    
    // substring
    
    string small = s1.substr(0,4);
    cout << small << endl;
    
    //erase
    
    string erased = s1.erase(0,2);
    cout << erased << endl;
    
    // getline
    
    string name {};
    getline(cin, name); // cin = from keyboard
    cout << name << endl;
    
    // Find word instance into frase
    
    getline(cin, name);
    cout << name.find("b") << endl; // return the index of the searched word
    
    return 0;
}