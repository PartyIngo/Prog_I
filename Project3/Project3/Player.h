#pragma once
#include <string>


class Player
{
public:
	Player();
	Player(std::string name, int hitpoints);
	~Player();

	std::string name = "";
	int hitpoints = 0;


private:
	


};
