#include<iostream>
#include<vector>

using namespace std;

int main(){
	int scores [] {100, 90, 80};
	
	//score is the element in the array
	for(int score : scores){
		cout << score << endl;
	}
	
	//vector based
	
	vector<double> temps {10.5, 6.4, 7.9};
	
	double avg_temp {};
	double running_sum {};
	
	for(auto temp : temps){
		running_sum += temp;
	}
	if(temps.size() !=0)
	avg_temp = running_sum / temps.size();
	
	cout << "Average temperature is: " << avg_temp << endl;
	
	return 0;
}
