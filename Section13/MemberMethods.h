#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Account{
	
	private:
		string name;
		double balance;
	public:
		void set_balance(double bal);
		double get_balance();
		void set_name(string n);
		string get_name();
		bool deposit(double amount);
		bool withdraw(double amount);
		};

void Account::set_balance(double bal){
	balance = bal;
	return;
}

double Account::get_balance(){
	return balance;
}

void Account::set_name(string n){
	name = n;
	return;
}

string Account::get_name(){
	return name;
}

bool Account::deposit(double amount){
	if(amount>=0){
		balance += amount;
		return true;
	} else {
		return false;
	}
}

bool Account::withdraw(double amount){
	if(balance-amount >= 0 && amount >=0){
		balance -= amount;
		return true;
	} else {
		return false;
	}
}


