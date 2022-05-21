#include <iostream>
#include <string>
#include <vector>
#include <MemberMethods.h>

using namespace std;

int main(){
	
	Account frank_account;
	frank_account.set_name("Frank's account");
	frank_account.set_balance(1000.0);
	
	if(frank_account.deposit(200.0)){
		cout << "\nDeposit OK" << endl;
	} else {
		cout << "\nDeposit NOK" << endl;
	}
	if(frank_account.withdraw(100.0)){
		cout << "\nDeposit OK" << endl;
	} else {
		cout << "\nDeposit NOK" << endl;
	}
	
	return 0;
}

