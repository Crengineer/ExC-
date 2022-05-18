#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(){
	
	int high_score {100};
	int low_score {65};
	const int *score_ptr {&high_score};
	
	cout << *score_ptr << endl; 
//	*score_ptr = 86;          Not permitted by const
	score_ptr = &low_score;
	
	cout << *score_ptr << endl; 
	return 0;
}
