#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
	//Attributes
	string name;
	int health;
	int xp;
	
	//Methods
	
	void talk(string);
	bool is_dead();
	
};

class Account{
	//attributes
	
	string name {"Account"};
	double balance {0.0};
	
	//methods
	
	bool deposit(double);
	bool withdraw(double);
	
};


int main(){
	
	Player Frank;
	Player Hero;
	
	Player players[] {Frank, Hero};
	
	vector<Player> player_vec {Frank};
	player_vec.push_back(Hero);
	
	Player *enemy {nullptr};
	enemy = new Player;
	delete enemy;
	
	return 0;
}
