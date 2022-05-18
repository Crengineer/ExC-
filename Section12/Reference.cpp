#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	int num {100};
	int &ref {num};
	
	cout << num << endl; //100
	cout << ref << endl; // 100
	
	num = 200;
	cout << num << endl; //200
	cout << ref << endl; //200
	
	ref = 300;           // Doing this operation, ref changes the value inside num variable
	cout << num << endl; //300
	cout << ref << endl; //300
	
	/*******************************************************/
	
	vector<string> stooges {"Larry", "Andrew", "Matthew"};
	for(auto name: stooges){
		name = "Gang";
	}
	cout << endl;

	for(string el: stooges);{
		cout << el << endl;
	}
	
	return 0;
}
