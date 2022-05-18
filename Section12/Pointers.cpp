#include <iostream>
#include <vector>
#include <p_strstring>

using namespace std;


int main(){
	//int *p {nullptr};
	//int j {2};
	//*p=j;
	/*
	cout << "Value of p" << p << endl;
	cout << "Address of p" << &p << endl;
	cout << "Size of p" << sizeof(p) << endl;
	*/
	
	string * p_str {nullptr};
	string str[3] {"Giacomo", "Paul", "Nahitan Nandez"};
	
	*p_str = str;
	cout << p_str << endl;
	return 0;
}
