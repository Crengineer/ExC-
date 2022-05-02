#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//using namespace string;

int main(){
    string secret_msg {};
    string orig_alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvWxyz"};
    string ciphr_alphabet {"ZBCEDFJHIGKMLNOPQRSTUVWXYAabcdefghikjlmonpqrstuvWxyz"};
    int step {};
    int i {};
    
    cout << "Insert the message: ";
    getline(cin, secret_msg);
    cout << "\nInsert the step: ";
    cin >> step;
    for(int i {0}; i<=secret_msg.length();++i){
        if(secret_msg[i]+step>'z' || secret_msg[i]+step>'Z'){
            secret_msg[i]= secret_msg[i]+step-26;
        } else {
            secret_msg[i]= secret_msg[i]+step;
        }
    }
    cout << secret_msg << endl;
    
    //Ciphrarium based on personal choice
    cout << "\nInsert the message: ";
    getline(cin, secret_msg);
     for(i=0; i<secret_msg.length();++i){
         secret_msg[i] = ciphr_alphabet.find(orig_alphabet.find(secret_msg[i]));
     }
     cout << secret_msg << endl;
     
     //Frank's solution
     getline(cin, secret_msg);
     string encrypted_msg {};
     for(char c: secret_msg){
         size_t position = orig_alphabet.find(c);
         if(position != string::npos){
             char new_char {key.at(position)};
             encrypted_msg += new_char;
         } else {
             encrypted_msg += c;
         }
     }
     cout << "\n" << encrypted_msg << endl;
    
    return 0;
}