#pragma once
#include "pch.h"
#include "Monk.h"

using namespace std;

Monk::Monk() {

	// initialising variables
	this->attackPoints = 3;
	this->health = 15;
	this->treasureFound = false;
	this->action = "";
	this->roomsVisited = 0;
	this->isDevilDefeated = false;
}

void Monk::personaliseMonk() {

	// prompts user for monk name and description and stores them
	cout << "Enter your Monk's name:" << endl;
	getline(cin, this->name);
	cout << "Enter your Monk's description: " << endl;
	getline(cin, this->description);
}

void Monk::display() {
	// displays the monks details formatted
	cout << endl << "------ MONK -------" << endl;
	cout << "Name : " << name << endl;
	cout << "Health : " << health << endl;
	cout << "Attack Points : " << attackPoints << endl;
	cout << "Description : " << description << endl;
	cout << "Rooms visited : " << roomsVisited << endl;
}

//  set and get functions / methods 

void Monk::setHealth(int health) {
	this->health = health;
}

int Monk::getHealth() {
	return health;
}

void Monk::foundTreasure() {
	treasureFound = true;
}

string Monk::getAction() {
	return action;
}

bool Monk::gotTreasure() {
	return treasureFound;
}

int Monk::getRoomsVisited() {
	return roomsVisited;
}

void Monk::newRoom() {
	roomsVisited += 1;
}

void Monk::damageBuff(int buff) {
	attackPoints += buff;
}

void Monk::defeatedDevil() {
	isDevilDefeated = true;
}

void Monk::setDamage(int damage) {
	attackPoints = damage;
}


int Monk::attack() {
	// error catching while loop
	while (true) {

		// choose action prompt
		cout << "--- Choose your action! ---" << endl;
		cout << "Attacks : " << endl;
		cout << "(1) Holy Water!" << endl;
		cout << "(2) Enlightenment!" << endl;
		cout << "Defense : " << endl;
		cout << "(3) Read The Bible (regenerates one health)!" << endl;

		// special should only be visible if the devil has been defeated
		if (isDevilDefeated) {
			cout << "Special : " << endl;
			cout << "(4) Satans Curse!" << endl;
		}

		// recieve user input
		getline(cin, this->choice);


		// do each action according to the players choice
		// action is saved into variable to be used seperately
		if (choice == "1") {
			
			// 33% chance of attack hitting 
			// returns how much damage is being done
			if ((rand() % 49) > 12) {
				action = name + " attacked using Holy Water! This dealt " + to_string(attackPoints) + " damage";
				return attackPoints;
			}
			action = name + " missed their Holy Water!";
			return 0;
		}
		else if (choice == "2") {
			// 50% chance of attack hitting 
			// returns how much damage is being done
			if ((rand() % 49) > 24) {
				action = name + " attacked using Enlightenment! This dealt " + to_string(attackPoints+1) + " damage";
				return attackPoints+1;
			}
			action = name + " missed Enlightenment!";
			return 0;
		}
		else if (choice == "3") {

			// increases health and returns 0 as no damage done
			health += 1;
			action = name + " Read The Bible and restored 1 health point";
			return 0;
		}
		else if (choice == "4") {

			// checks if they are allowed to use special
			if (isDevilDefeated) {

				// 50% chance of action playing through
				if ((rand() % 49) > 24) {
					action = name + " used Satans Curse! You restored 1 health point and dealt " + to_string(round(attackPoints * 1.5)) + " damage";
					health += 1;
					return trunc(attackPoints * 1.5);
				}
				action = name + " failed to use Satans Curse!";
				return 0;
			}

			// else statement for if they cant use special yet
			// no return statement so loop carries on
			else {
				cout << "Enter an appropriate option!" << endl;
			}
		}

		// else statement to catch incorrect input
		// no return statement so loop carries on
		else {
			cout << "Enter an appropriate option!" << endl;
		}
	}
}

