#include<iostream>

using namespace std;

int main(){
	
	const double usd_dollar_per_eur {1.19};
	
	double euros {0.0};
	double dollars {0.0};
	
	cout << "Welcome to the EUR to USD converter" << endl;
	cout << "Enter the value in EUR: " << endl;
	cin >> euros;
	cout << endl << "The value in USD is: " << euros*usd_dollar_per_eur;
	
	
	return 0;
}
