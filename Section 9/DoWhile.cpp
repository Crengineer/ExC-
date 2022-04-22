#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	char selection {};
	
	do{
		cout << "1. Do this" << endl;
		cout << "2. Do that" << endl;
		cout << "Press q or Q to exit" << endl;
		cin >> selection;
		if(selection == '1'){
			cout << "Do ..." << endl;
		} else if(selection == '2'){
			cout << "Do 2nd action..." << endl;
		}
		
		
	} while(selection !='q' && selection != 'Q');
	
	
	return 0;
}
