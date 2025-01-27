#pragma once
#include "pch.h"
#include "Monster.h"
#include "Room.h"
#include "Devil.h"

using namespace std;

Devil::Devil() {
	this->name = "Devil";
	this->health = 14;
	this->attackPoints = 3;
	this->type = 3;
}


int Devil::attack() {
	if ((rand() % 20) > 4) {
		if ((rand() % 100) > 49) {
			action = "Devil attacked using ";

			int randomAttack = rand() % 2;

			if (randomAttack == 0) {
				action = action + "temptation! They dealt " + to_string(attackPoints) + " damage.";
			}
			if (randomAttack == 1) {
				action = action + "greed! They dealt " + to_string(attackPoints) + " damage.";
			}

			// returniong damage by Devil
			return attackPoints;
		}

		// missed attack so returning fail and no damage
		action = name + " attack failed!";
		return 0;
	}

	action = " Someone sinned! Satan restored 1 health point! ";

	// changing health and returning 0 damage as they didnt attack
	health += 1;

	return 0;
}

void Devil::printMonster() {
	cout << "                ,    ,    /\\   /\\ " << endl;
	cout << "               /( /\\ )\\  _\\ \\_/ /_" << endl;
	cout << "               |\\_||_/| < \\_   _/ >" << endl;
	cout << "               \\______/  \\|0   0|/" << endl;
	cout << "                 _\\/_   _(_  ^  _)_" << endl;
	cout << "                ( () ) /`\\|V\"\"\"V|/`\\ " << endl;
	cout << "                  {}   \\  \\_____/  / " << endl;
	cout << "                  ()   /\\   )=(   /\\ " << endl;
	cout << "                  {}  /  \\_/\\=/\\_/  \\ " << endl;
	cout << "                           _ " << endl;
	cout << "                          | | " << endl;
	cout << "                 ___  __ _| |_ __ _ _ __  " << endl;
	cout << "                / __|/ _` | __/ _` | '_ \\ " << endl;
	cout << "                \\__ \\ (_| | || (_| | | | |" << endl;
	cout << "                |___/\\__,_|\\__\\__,_|_| |_|" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

string Devil::getAction() {
	return action;
}

int Devil::getHealth() {
	return health;
}

void Devil::display() {
	// displays monster stats formatted
	cout << endl << "----- Devil ------" << endl;
	cout << "Name : " << name << endl;
	cout << "Health : " << health << endl;
	cout << "Attack Points : " << attackPoints << endl;
}

void Devil::takeDamage(int damage) {
	health = health - damage;
}

int Devil::getType() {
	return type;
}