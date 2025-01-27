#pragma once
#include "pch.h"
#include "Monster.h"
#include "Room.h"
#include "Goblin.h"

using namespace std;

Goblin::Goblin() {
	this->name = "Goblin";
	this->health = 10;
	this->attackPoints = 2;
	this->type = 0;
}


int Goblin::attack() {
	if ((rand() % 20) > 4) {
		if ((rand() % 100) > 49) {
			action = "Goblin attacked using ";

			int randomAttack = rand() % 2;

			if (randomAttack == 0) {
				action = action + "stab! They dealt " + to_string(attackPoints) + " damage.";
			}
			if (randomAttack == 1) {
				action = action + "punch! They dealt " + to_string(attackPoints) + " damage.";
			}

			// returniong damage by goblin
			return attackPoints;
		}

		// missed attack so returning fail and no damage
		action = name + " attack failed!";
		return 0;
	}

	action = "Goblin ate an apple! They restored 1 health point!";

	// changing health and returning 0 damage as they didnt attack
	health += 1;

	return 0;
}

void Goblin::printMonster() {
	cout << "                        ,      ," << endl;
	cout << "                       /(.-\"\"-.)\\ " << endl;
	cout << "                   |\\  \\/      \\/  /|" << endl;
	cout << "                   | \\ / =.  .= \\ / |" << endl;
	cout << "                   \\( \\   o\\/o   / )/" << endl;
	cout << "                    \\_, '-/  \\-' ,_/" << endl;
	cout << "                      /   \\__/   \\ " << endl;
	cout << "                      \\ \\__/\\__/ /" << endl;
	cout << "                    ___\\ \\|--|/ /___" << endl;
	cout << "                  /`    \\      /    `\\ " << endl;
	cout << "                 /       '----'       \\ " << endl;
	cout << "                           _     _ _" << endl;
	cout << "                          | |   | (_)" << endl;
	cout << "                __ _  ___ | |__ | |_ _ __ " << endl;
	cout << "               / _` |/ _ \\| '_ \\| | | '_ \\ " << endl;
	cout << "              | (_| | (_) | |_) | | | | | |" << endl;
	cout << "               \\__, |\\___/|_.__/|_|_|_| |_|" << endl;
	cout << "                __/ |" << endl;
	cout << "               |___/ " << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

string Goblin::getAction() {
	return action;
}

int Goblin::getHealth() {
	return health;
}

void Goblin::display() {
	// displays monster stats formatted
	cout << endl << "----- Goblin ------" << endl;
	cout << "Name : " << name << endl;
	cout << "Health : " << health << endl;
	cout << "Attack Points : " << attackPoints << endl;
}

void Goblin::takeDamage(int damage) {
	health = health - damage;
}

int Goblin::getType() {
	return type;
}