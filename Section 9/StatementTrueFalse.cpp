#include<iostream>

using namespace std;

int main(){
	
	int num {};
	
	cout << "Enter an integer: " <<endl;
	cin >> num;
	
	cout << "The number is " << ((num%2==0) ? "even" : "odd") << endl;
	
	return 0;
}
