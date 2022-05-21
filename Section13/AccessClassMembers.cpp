#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Player{
	//Attributes
public:
	string name;
	int health;
	int xp;
	
	//Methods
	
	void talk(string t){
		cout << this->name << " says: " << t << endl;	
	}
	bool is_dead();
	
};

class Account{
	//attributes
	public:
	string name;
	double balance {0.0};
	
	//methods
	
	bool deposit(double dep){
		balance += dep;
	}
	bool withdraw(double wit){
		balance -= wit;
	}
	bool print_balance(){
		cout << balance << endl;
	}
	
};














int main(){
	
	Player Frank;
	Frank.name = "Frank";
	Frank.health = 100;
	Frank.xp = 12;
	
	Frank.talk("Cool boyyy");
	
	Player *enemy = new Player;
	(*enemy).name = "Enemy";
	(*enemy).health = 100;
	enemy->xp = 15;
	enemy->talk("I will destroy you!");
	
	Account Frank_account;
	
	Frank_account.name = "Frank_account";
	Frank_account.deposit(100.0);
	
	return 0;
	
}
