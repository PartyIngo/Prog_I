#include "stdafx.h"
#include "Enemy.h"



Enemy::Enemy()
{
	this->name = new std::string();
	this->hitpoints = new int();
}

Enemy::Enemy(const char *name, int hitpoints)
{
	this->name = new std::string(name);
	this->hitpoints = new int(hitpoints);
}

Enemy::~Enemy()
{
	delete name;
	delete hitpoints;
}

void Enemy::attack(std::string * playername)
{
	std::cout << *(this->name) << " attacks the pal " << *(playername) << std::endl;
}
