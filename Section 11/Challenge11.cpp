#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

//variable declaration
void print_numbers(vector<int> &vector);
void add_number(vector<int> &vector);
void display_mean(vector<int> &vector);
void display_small_num(vector<int> &vector);
void display_great_num(vector<int> &vector);

void print_numbers(vector<int> &vector){
	cout << "\nSelection: Print numbers" << endl;
	if(vector.empty()){
		cout << "Empty vector: insert number in it." << endl;
		return;
	}
	for(auto val: vector){
		cout << val << " ";
		}
		cout << endl;
	return;
}

void add_number(vector<int> &vector){
	int el {};
	cout << "\nSelection: Add a number" << endl;
	cout << "Digit the number to insert: ";
	cin >> el;
	vector.push_back(el);
	cout << endl;
	return;
}

void display_mean(vector<int> &vector){
	double sum {0};
	int count {0};
	cout << "\nSelection: Display mean of numbers" << endl;
	for(auto val: vector){
		sum += val;
		count++;
	}
	cout << "The mean of elements of the vector is: " << sum/count << endl;
	return;
}

void display_small_num(vector<int> &vector){
	cout << "\nSelection: Display smallest number" << endl;
	if(vector.empty()){
		cout << "Empty vector: insert number in it." << endl;
		return;
	}
	int min  {vector[0]};
	for(auto val: vector){
		if(val <= min){
			min=val;
		}
	}
	cout << "\nThe smallest number in the vector is: " << min << endl;
	return;
}

void display_great_num(vector<int> &vector){
	cout << "\nSelection: Display largest number" << endl;
	if(vector.empty()){
		cout << "Empty vector: insert number in it." << endl;
		return;
	}
	int max {vector[0]};
	for(auto val: vector){
		if(val >= max){
			max=val;
		}
	}
	cout << "\nThe greatest number in the vector is: " << max << endl;

	return;
}


void menu(){
	cout << "Menu options: " << endl;
	cout << "Press P to: Print numbers " << endl;
	cout << "Press A to: Add a number " << endl;
	cout << "Press M to: Display mean of numbers " << endl;
	cout << "Press S to: Display smallest number " << endl;
	cout << "Press L to: Display largest number " << endl;
	cout << "Press Q to: Quit " << endl;
	cout << "Selection: ";
	return;
}

int main(){
	char sel {};
	vector<int> vec {};
	do{
		menu();
		cin >> sel;
		switch(sel){
			case 'p':case 'P':
				print_numbers(vec);
				break;
			case 'a':case 'A':
				add_number(vec);
				break;
			case 'm':case 'M':
				display_mean(vec);
				break;
			case 's':case 'S':
				display_small_num(vec);
				break;
			case 'l':case 'L':
				display_great_num(vec);
				break;
			default:
				if(sel != 'q' && sel != 'Q'){
					cout << "Unrecognised command" << endl;
				}
				break;
				
		}
	}while(sel != 'q' && sel != 'Q');
	
	return 0;
}
