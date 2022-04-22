#include<iostream>

using namespace std;

int main(){
	
	char letter_grade {};
	
	cout << "Enter the letter grade: " << endl;
	cin >> letter_grade;
	
	switch(letter_grade){
		case 'A': case 'a': cout << "You need a 90 or above." << endl; break;
		case 'B': case 'b': cout << "You need 80-89." << endl; break;
		case 'C': case 'c': cout << "You need 70-79." << endl; break;
		case 'D': case 'd': cout << "You need 60-69." << endl; break;
		case 'E': case 'e': cout << "You need a 50-59." << endl; break;
		case 'F': case 'f': cout << "You are below 50." << endl; break;
		default: cout << "Invalid input" << endl; break;
	}
	
	return 0;
}
