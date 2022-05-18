#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(){
	
	int scores[] {100, 24, 48, -1};
	int *score_ptr {scores};
	
	while(*score_ptr != -1){
		cout << *score_ptr << endl;
		score_ptr++;
	}
	
	
	return 0;
}
