#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	
	int nums {};
	
	cout << "How many items do you have? ";
	cin >> nums;
	
	vector<int> vec {};
	
	for(int i {0}; i<nums; i++){
		int data_item {};
		cout << "Insert the " << i+1 << "-th element in the vector: ";
		cin >> data_item;
		vec.push_back(data_item);
	}
	//Horizontal Histogram
	for(auto el: vec){
		for(int i {0}; i<el; i++){
			cout << '*';
		}
		cout << endl;
	}
	
	
	return 0;
}
