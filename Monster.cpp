#pragma once
#include "pch.h"
#include "Monster.h"
#include "Room.h"

using namespace std;

Monster::Monster() {

	// initialising variables
	this->health = 0;
	this->attackPoints = 0;
	this->action = "";
	
}
	
	
	void Monster::display() {

		// displays monster stats formatted
		cout << endl << "----- MONSTER ------" << endl;
		cout << "Name : " << name << endl;
		cout << "Health : " << health << endl;
		cout << "Attack Points : " << attackPoints << endl;
	}

	int Monster::attack() {

		// 75% chance for them to attack, if not they heal
		if ((rand() % 20) > 4) {

			// 50% chance of attack hitting
			if ((rand() % 100) > 49) {
				action = name + " attacked using ";

				// picking between the monsters 2 attacks
				int randomAttack = rand() % 2;



				// returning damage by monster
				return attackPoints;
			}

			// missed attack so returning fail and no damage
			action = name + " attack failed!";
			return 0;
		}

		// setting specific health message per monster
		action = "";

		// changing health and returning 0 damage as they didnt attack
		health += 1;
		return 0;
	}

	// get and set methods / functions

	int Monster::getHealth() {
		return health;
	}

	void Monster::takeDamage(int damage) {
		health = health - damage;
	}

	int Monster::getType() {
		return choice;
	}

	string Monster::getAction() {
		return action;
	}

	// monster ascii art function
	void Monster::printMonster() {
		
	}