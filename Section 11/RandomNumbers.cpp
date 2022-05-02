#include <iostream>
#include <cstdlib>  // contains rand()
#include <ctime>    // contains time()

using namespace std;


int main(){
	int rand_num {};
	
	size_t count{10};
	int min {1};      //lower bound
	int max {6};      //upper bound
	
	cout << "RAND_MAX is: " << RAND_MAX << endl;
	srand(time(nullptr));  //used to generate always different numbers at each iteration
	
	for(size_t i{1}; i<=count; i++){
		rand_num = rand() % max + min;  //generate number between lower and upper bound
		cout << rand_num << endl;
	}
	
	return 0;
}
