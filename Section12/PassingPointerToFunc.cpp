#include <iostream>
#include <vector>
#include <string>

using namespace std;

void double_data(int *int_ptr);
void swap(int *a, int *b);
void display(vector <string> *v);


void double_data(int *int_ptr){
	*int_ptr *= 2;
	cout << *int_ptr << endl;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << *a << " " << *b << endl;
}

void display(vector <string> *v){
	for(auto val: v){
		cout << val << endl;
	}
	return;
}

int main(){
	int val = 30, val2 = 40;
	vector<string> val {"Larry", "Barney", "Suppiluliuma"};
	int *num_ptr {nullptr};
	num_ptr = &val;
	double_data(num_ptr);
	swap(&val, &val2);
	display(val);
	return 0;
}
