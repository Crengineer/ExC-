#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;


int main(){
	
	double num{}, power {};
	
	cout << "Enter a number: ";
	cin >> num;
	
	cout << "\nThe square root of " << num << " is " << sqrt(num) << endl;
	cout << "\nThe cubed root of " << num << " is " << cbrt(num) << endl;
	cout << "\nThe sine of " << num << " is " << sin(num) << endl;
	cout << "\nThe cosine of " << num << " is " << cos(num) << endl;
	cout << "\nThe ceil of " << num << " is " << ceil(num) << endl;
	cout << "\nThe floor of " << num << " is " << floor(num) << endl;
	cout << "\nThe round of " << num << " is " << round(num) << endl;
	
	cout << "Enter the power: ";
	cin >> power;
	cout << "\nThe power of " << num << " elevated at " << power << " is " << pow(num, power) << endl;
	
	
	return 0;
}
