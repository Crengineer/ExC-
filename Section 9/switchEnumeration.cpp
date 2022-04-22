#include<iostream>

using namespace std;

int main(){
	
	enum direction {
		left, right, up, down  // 0, 1, 2, 3
	};
	
	direction heading {left};
	
	switch(heading){
		case left: cout << "Going left" << endl; break;
		case right: cout << "Going right" << endl; break;
		default: cout << "Ok" << endl; break;
	}
	
	return 0;
}
