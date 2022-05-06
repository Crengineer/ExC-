#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num){
	cout << num << endl;
}
void pass_by_value2(string s){
	int i {};
	for(i=0; i<s.length();++i){
		cout << s.at(i);
	}
}
void pass_by_value3(vector<string> v){
	
}
void print_vector(vector<string> v){
	
}


int main(){
	pass_by_value1(5);
	pass_by_value2("Cane");
	
	
	return 0;
}
