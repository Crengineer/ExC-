#include<vector>
#include<iostream>

using namespace std;

int main(){
	
	char selection;
	vector<int> vector {};
	int el {}, count {0}, min {}, max {};
	double mean {0}, sum {0};
	
	cout << "Menu options: " << endl;
	cout << "Press P to: Print numbers " << endl;
	cout << "Press A to: Add a number " << endl;
	cout << "Press M to: Display mean of numbers " << endl;
	cout << "Press S to: Display smallest number " << endl;
	cout << "Press L to: Display largest number " << endl;
	cout << "Press Q to: Quit " << endl;
	for(;;){
		
		cout << "\nInsert the command: ";
		cin >> selection;
		switch(selection){
		case 'p':case 'P':
			cout << "\nSelection: Print numbers" << endl;
			for(auto val: vector){
				cout << val << " ";
			}
			break;
		case 'a':case 'A':
			cout << "\nSelection: Add a number" << endl;
			cin >> el;
			vector.push_back(el);
			break;
		case 'm':case 'M':
			cout << "\nSelection: Display mean of numbers" << endl;
			for(auto val: vector){
				sum += val;
				count++;
			}
			cout << sum/count << endl;
			sum =0;
			count =0;
			break;
		case 's':case 'S':
			cout << "\nSelection: Display smallest number" << endl;
			min = vector[0];
			for(auto val: vector){
				if(val <= min){
					min=val;
				}
			}
			cout << "\nThe smallest number in the vector is: " << min << endl;
			break;
		case 'l':case 'L':
			cout << "\nSelection: Display largest number" << endl;
			max = vector[0];
			for(auto val: vector){
				if(val >= max){
					max=val;
				}
			}
			cout << "\nThe greatest number in the vector is: " << max << endl;
			break;
		case 'q':case 'Q':
			cout << "\nSelection: Quit" << endl;
			break;
		default:
			cout << "Unrecognised command" << endl;
		}
		if(selection == 'q' || selection == 'Q'){
			cout << "Termined program.";
			break;
		}
	}
	
	
	
	
	
	return 0;
}
