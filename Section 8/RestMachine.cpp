#include<iostream>

using namespace std;

int main(){
	
	int cents {0}, dollar {0}, quarter {0}, dime {0}, nickel {0}, penny {0};
	
	cout << "Enter the number of cents: " << endl;
	cin >> cents;

	while(cents >= 100){
		dollar++;
		cents -= 100;
	}
	cout << "Dollars: " << dollar << endl;
	while(cents >= 25){
		quarter++;
		cents -= 25;
	}
	cout << "Quarters: " << quarter << endl;
	while(cents >=10){
		dime++;
		cents -= 10;
	}
	cout << "Dimes: " << dime << endl;
	while(cents >=5){
		nickel++;
		cents -= 5;
	}
	cout << "Nickels: " << nickel << endl;
	while(cents >=1){
		penny++;
		cents -= 1;
	}
	cout << "Pennies: " << penny << endl;
	return 0;
}
