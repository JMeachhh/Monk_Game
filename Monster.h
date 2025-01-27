#pragma once
#include "pch.h"
#include "Character.h"

using namespace std;

class Monster: public Character {
public:
	Monster();

	// get and set functions
	int getType();
	void takeDamage(int damage);
	int getHealth();
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

	// gameplay attributes
	string action;
};
 