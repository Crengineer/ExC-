#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	//nested loops
	
	for(int i {0}; i<10; ++i){
		
		for(int j {0}; j<10; ++j){
			
			cout << j  << " ";
			
		}
		
		cout << endl;
	}
	
	cout << endl;
	
	// array loops
	
	int grid[3][5] {}, count {0};
	
	for(int row {0}; row<3; ++row){
		
		for(int column {0}; column<5; ++column){
			count++;
			cout << count << " ";
		}
		cout << endl;
	}
	
	// vector loops
	
	vector<vector<int>> vector_2d{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	for(auto vec: vector_2d){
		for(auto val: vec){
			cout << val << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
