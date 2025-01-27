#pragma once
#include "pch.h"
#include "Monster.h"
#include "Room.h"
#include "Wizard.h"

using namespace std;

Wizard::Wizard() {
	this->name = "Wizard";
	this->health = 12;
	this->attackPoints = 1;
	this->type = 1;
}


int Wizard::attack() {
	if ((rand() % 20) > 4) {
		if ((rand() % 100) > 49) {
			action = "Wizard attacked using ";

			int randomAttack = rand() % 2;

			if (randomAttack == 0) {
				action = action + "magic blast! They dealt " + to_string(attackPoints) + " damage.";
			}
			if (randomAttack == 1) {
				action = action + "poison spell! They dealt " + to_string(attackPoints) + " damage.";
			}

			// returniong damage by Wizard
			return attackPoints;
		}

		// missed attack so returning fail and no damage
		action = name + " attack failed!";
		return 0;
	}

	action = "Wizard cast a healing spell! They restored 1 health point!";

	// changing health and returning 0 damage as they didnt attack
	health += 1;

	return 0;
}

void Wizard::printMonster() {
	cout << "                           /^\\     ." << endl;
	cout << "                      /\\   \"V\"" << endl;
	cout << "                     /__\\   I      O  o" << endl;
	cout << "                    //..\\\\  I     ." << endl;
	cout << "                    \\].`[/  I" << endl;
	cout << "                    /l\\/j\\  (]    .  O" << endl;
	cout << "                   /. ~~ ,\\/I          ." << endl;
	cout << "                   \\\\L__j^\\/I       o" << endl;
	cout << "                    \\/--v}  I     o   ." << endl;
	cout << "                    |    |  I   _________" << endl;
	cout << "                    |    |  I c(`       ')o" << endl;
	cout << "                    |    l  I   \\.     ,/" << endl;
	cout << "                  _/j  L l\\_!  _//^---^\\\\_" << endl;
	cout << "                       _                  _ " << endl;
	cout << "                      (_)                | |" << endl;
	cout << "             __      ___ ______ _ _ __ __| |" << endl;
	cout << "             \\ \\ /\\ / / |_  / _` | '__/ _` |" << endl;
	cout << "              \\ V  V /| |/ / (_| | | | (_| |" << endl;
	cout << "               \\_/\\_/ |_/___\\__,_|_|  \\__,_|" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

string Wizard::getAction() {
	return action;
}

int Wizard::getHealth() {
	return health;
}

void Wizard::display() {
	// displays monster stats formatted
	cout << endl << "----- Wizard ------" << endl;
	cout << "Name : " << name << endl;
	cout << "Health : " << health << endl;
	cout << "Attack Points : " << attackPoints << endl;
}

void Wizard::takeDamage(int damage) {
	health = health - damage;
}

int Wizard::getType() {
	return type;
}