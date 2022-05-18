#include <iostream>
#include <string>

using namespace std;

int main(){
	/*
	int *int_ptr{nullptr};
	
	int_ptr = new int;
	
	cout << int_ptr << endl;
	
	delete int_ptr;
	*/
	size_t size {0};
	double *double_ptr{nullptr};
	
	cout << "Enter size: ";
	cin >> size;
	double_ptr = new double[size];
	delete double_ptr;
	
	
	int scores[] {100, 34, 74};
	int *int_ptr{scores};
	
	cout << *int_ptr << endl;
	cout << *(int_ptr+1) << endl;
	
	cout << endl;
	return 0;
}
