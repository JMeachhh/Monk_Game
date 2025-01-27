#pragma once
#include "pch.h"
#include "Character.h"

using namespace std;

class Monk: public Character{
public:
	Monk();

	// get and set functions
	void setHealth(int health);
	int getHealth();
	void setDamage(int damage);
	int getRoomsVisited();
	void defeatedDevil();
	void foundTreasure();
	bool gotTreasure();
	void newRoom();
	void damageBuff(int buff);
	string getAction();

	// game features
	void personaliseMonk();
	int attack();
	void display();
	
private:

	// core attributes
	int health;
	int attackPoints;
	string description;
	string name;

	// gameplay attributes
	bool treasureFound;
	int roomsVisited;
	bool isDevilDefeated;

	// information holders
	string action;
	string choice;
};