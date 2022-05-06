#include <iostream>
#include <string>
#include <vector>


using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num){
	num = 1000;
}

void pass_by_ref2(string &s){
	s = "Changed";
	
}

void pass_by_ref3(vector<string> &v){
	v.clear();
	
}

void print_vector(const vector<string> &v){
	for(auto val: v){
		cout << val << " ";
	}
	cout << endl;
	
}

int main(){
	
	int num{10};
	int another_num{20};
	
	cout << num << endl;
	pass_by_ref1(num);
	cout << num << endl;  //number has changed due to reference
	
	cout << another_num << endl;
	pass_by_ref1(another_num);
	cout << another_num << endl;  //number has changed due to reference
	
	string name {"Frank"};
	cout << name << endl;
	pass_by_ref2(name);
	cout << name << endl;  //string has changed due to reference
	
	vector<string> names {"Marco", "Andrea", "Francesco"};
	print_vector(names);
	pass_by_ref3(names);
	print_vector(names);  //string has changed due to reference
	
	return 0;
}
