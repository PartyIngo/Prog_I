#pragma once
#include <string>

class Enemy
{
public:
	Enemy();
	Enemy(const char *name, int hitpoints);
	~Enemy();


	void setName(std::string name);
	std::string getName();

	void setHitpoints(int hitpoints);
	int getHitpoints();
	

	/*
	expects const reference to Player
	decreases hitpoints on Player
	*/
	void attack(std::string *playername);




private:
	std::string *name;
	int *hitpoints;

};

