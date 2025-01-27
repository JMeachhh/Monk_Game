#pragma once
#include "pch.h"
#include "Monster.h"
#include "Room.h"
#include "Rat.h"

using namespace std;

Rat::Rat() {
	this->name = "Rat";
	this->health = 2;
	this->attackPoints = 4;
	this->type = 2;
}


int Rat::attack() {
	if ((rand() % 20) > 4) {
		if ((rand() % 100) > 49) {
			action = "Rat attacked using ";

			int randomAttack = rand() % 2;

			if (randomAttack == 0) {
				action = action + "bite! They dealt " + to_string(attackPoints) + " damage.";
			}
			if (randomAttack == 1) {
				action = action + "scratch! They dealt " + to_string(attackPoints) + " damage.";
			}

			// returniong damage by Rat
			return attackPoints;
		}

		// missed attack so returning fail and no damage
		action = name + " attack failed!";
		return 0;
	}

	action = "Rat groomed itself with its claws! They restored 1 health point!";

	// changing health and returning 0 damage as they didnt attack
	health += 1;

	return 0;
}

void Rat::printMonster() {
	cout << "                 (\\,/)" << endl;
	cout << "                 oo   '''//,        _" << endl;
	cout << "              ,/_;~,        \\,    / '" << endl;
	cout << "               \"'   \\    (    \\    !" << endl;
	cout << "                     ',|  \\    |__.'" << endl;
	cout << "                     '~  '~----''" << endl;
	cout << "                               _   " << endl;
	cout << "                              | | " << endl;
	cout << "                     _ __ __ _| |_ " << endl;
	cout << "                    | '__/ _` | __|" << endl;
	cout << "                    | | | (_| | |_ " << endl;
	cout << "                    |_|  \\__,_|\\__|" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

string Rat::getAction() {
	return action;
}

int Rat::getHealth() {
	return health;
}

void Rat::display() {
	// displays monster stats formatted
	cout << endl << "----- Rat ------" << endl;
	cout << "Name : " << name << endl;
	cout << "Health : " << health << endl;
	cout << "Attack Points : " << attackPoints << endl;
}

void Rat::takeDamage(int damage) {
	health = health - damage;
}

int Rat::getType() {
	return type;
}