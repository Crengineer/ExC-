#include <iostream>
#include <vector>
#include <string>

using namespace std;

int *largest_int(int *a, int *b){
	if(*a > *b)
		return a;
	else
		return b;
	
}

int *create_array(size_t size, int init_val){
	int *new_storage {nullptr};
	new_storage = new int[size];
	for(int i {0};i<size;i++){
		*(new_storage+i) = init_val;
	}
	return new_storage;
}

int main(){
	
	int a {100};
	int b {200};
	
	int * largest_ptr{nullptr};
	
	largest_ptr = largest_int(&a, &b);
	cout << *largest_ptr << endl;
	delete largest_ptr;
	int * vec {nullptr};
	size_t size = 6;
	vec = create_array(size,5);
	cout << endl;
	for(int i {0};i<size;++i){
		cout << vec[i] << " ";
	}
	return 0;
}
