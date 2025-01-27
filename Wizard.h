#pragma once
#include "pch.h"
#include "Character.h"
#include "Monster.h"

class Wizard : public Monster {
public:
	Wizard();

	// get and set functions
	int getHealth();
	void takeDamage(int damage);
	int getType();
	string getAction();

	// gameplay functions
	void printMonster();
	int attack();
	void display();
private:
	// core attributes
	string name;
	int health;
	int choice;
	int attackPoints;
	int type;

	// gameplay attributes
	string action;
};
