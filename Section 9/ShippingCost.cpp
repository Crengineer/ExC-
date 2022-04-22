#include<iostream>

using namespace std;

int main(){
	int length {0}, width {0}, height {0};
	double cost {0};
	const double base_cost {2.50};
	
	cout << "Enter values of length, width and height separated by space of the item to ship: " << endl;
	cin >> length >> width >> height;
	
	if((length > 10) || (length < 0) || (width > 10) || (width < 0) || (height > 10) || (height < 0)){
		cout << "Sorry, we cannot ship the item." << endl;
		return 0;
	}
	if((length*width*height) > 500){
		cost = (1+0.25)*base_cost;
		cout << "The cost is: " << cost << " for " << (length*width*height) << endl;
		return 0;
	}  else if((length*width*height) > 100){
		cost = (1+0.10)*base_cost;
		cout << "The cost is: " << cost << " for " << (length*width*height) << endl;
		return 0;
	}
	
	
	cost = base_cost;
	cout << "The cost is: " << cost << " for " << (length*width*height) << endl;
	return 0;
}
