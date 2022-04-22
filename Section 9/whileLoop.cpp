#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int num {};
	/*
	cout << "Enter a number: " << endl;
	cin >> num;
	
	int i {1};
	
	while(num>=i){
		cout << num << endl;
		num--;
	}
	*/
	bool done {false};
	
	while(!done){
		cout << "Enter a number between 0 and 5: " << endl;
		cin >> num;
		if(num >=0 && num <=5){
			cout << "Ok it is correct." << endl;
			done = true;
		}
	}
	
	
	return 0;
}
