#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	//Infinite loop
	/*
	for(;;){
		cout << "Infinite loops";
	}
	*/
	//true condition infinite loop
	while(true){
		char again {};
		cout << "Do you want to loop again? (Y/N)" << endl;
		cin >> again;
		if(again == 'N' || again == 'n'){
			break;
		}
		
	}	
	return 0;
}
