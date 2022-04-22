#include<iostream>
#include<vector>

using namespace std;

int main(){
	int i {0}, count {0};
	//incrementing loop
	for(int i {0}; i<=10; ++i){
		cout << i << endl;
	}
	
	//incrementing loop - larger steps
	for(int i {0}; i<=10; i+=2){
		cout << i << endl;
	}
	
	//decrementing loop
	
	for(int i {0}; i>=10; --i){
		cout << i << endl;
	}
	
	for(int i {0}; i<=10; ++i){
		for(int j {0}; j<=10; ++j){
			cout << count++ << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i {0}; i<100; i++){
		if(i%10==0){
			cout << i << " " <<endl;
		} 
		else {
			cout << i << " ";
		}
	}
	
	vector<int> nums {10,20,30};
	for(int {0}; i<nums.size(); ++i){
		cout << nums[i] << " ";
	}
	
	
	return 0;
}
