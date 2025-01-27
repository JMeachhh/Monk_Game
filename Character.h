#pragma once
#include "pch.h"

using namespace std;

class Character {
public:
	Character();

	// get and set 
	string getName();
	string getAction();

	// gameplay 
	void display();
	int attack();
private:
	
	// core attributes
	string name;
	int health;
	int attackPoints;

	string action;
};