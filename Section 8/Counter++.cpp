#include<iostream>

using namespace std;

int main(){
	
	int counter {0};
	int result {0};
	
	cout << "Counter: " << counter << endl; // 0
	
	//Differences between: 
	result = counter++;
	cout << "Counter: " << counter << endl; // 1
	result = ++counter;										//want to increment counter before its use
	cout << "Result: " << result << endl; // 2
	
	//and:
	counter = 0;
	result = ++counter;
	cout << "Counter: " << counter << endl; // 1
	result = counter++;
	cout << "Result: " << result << endl; // 1
	
	
	return 0;
}
