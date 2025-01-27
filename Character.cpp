#pragma once
#include "pch.h"
#include "Character.h"

using namespace std;

Character::Character() {

	// variable setting
	this->health = 0;
	this->attackPoints = 0;
	this->name = "";
}

// get and set 
string Character::getName() {
	return name;
}
string Character::getAction() {
	return action;
}

// display method
void Character::display() {
	cout << "Name : " << name << endl;
	cout << "Health : " << health << endl;
	cout << "Attack Points :" << attackPoints << endl;
}

// attack function
int Character::attack() {
	return 0;
}