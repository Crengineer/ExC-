#include<iostream>

using namespace std;

int main(){
	int total_amount {100};
	int total_number {8};
	double average {0.0};
	
	average = total_amount/total_number;
	cout << average << endl;
	
	average = static_cast<double>(total_amount) / total_number;
	cout << average << endl;
	
	return 0;
}
