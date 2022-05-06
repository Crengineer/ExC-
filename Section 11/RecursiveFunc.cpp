#include <iostream>
#include <cstring>
#include <vector>

using namespace std;


unsigned long long factorial(unsigned long long n);
unsigned long long fibonacci(unsigned long long n);

//factorial function

unsigned long long factorial(unsigned long long n){
	if(n==0)
		return 1;
	return n*factorial(n-1);
}

// Fibonacci sequence

unsigned long long fibonacci(unsigned long long n){
	if(n<=1){
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}




int main(){
	cout << factorial(5) << endl;
	cout << fibonacci(5) << endl;
	
	
	
	
	
	
	return 0;
}
