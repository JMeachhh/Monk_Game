#pragma once
#include "pch.h"
#include "Room.h"
#include "MonsterRoom.h"
#include "Monster.h"
#include "Goblin.h"
#include "Wizard.h"
#include "Rat.h"
#include "Devil.h"

using namespace std;

MonsterRoom::MonsterRoom(Monk monk) {

	// initialise monster
	this->monk = monk;
	this->ignoredInput = "";
	this->monsterType = rand() % 4;
}

Monk MonsterRoom::action() {
	bool fighting = true;

	if (monsterType == 0) {
		Goblin CreatedMonster;

		// fighting loop
		while (fighting) {

			// displays room - monk turn pre-action
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONKS TURN --" << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// monster takes damage of the amount returned by the monks attack 
			// monk attack function has monk action ui
			CreatedMonster.takeDamage(monk.attack());

			// display room - monk turn post-action
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONKS TURN --" << endl;

			// break fighting loop if monster is dead
			if (CreatedMonster.getHealth() < 1) {
				break;
			}

			// result of monks action
			cout << monk.getAction() << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// prompts user and waits for input to conntinue
			cout << endl << "Press enter to start the monsters turn! " << endl;
			getline(cin, ignoredInput);

			// diaplys room - monster turn
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONSTERS TURN --" << endl;

			// monk health changed by getting health and reducing it by the amount returned by monster attack function
			monk.setHealth(monk.getHealth() - CreatedMonster.attack());

			// output monsters action
			cout << CreatedMonster.getAction() << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// prompts user and waits for input to conntinue
			cout << endl << "Press enter to start your turn! " << endl;
			getline(cin, ignoredInput);

			// if monk dead then break fighting loop
			if (monk.getHealth() < 1) {
				break;
			}
		}
	}
	else if (monsterType == 1) {
		Wizard CreatedMonster;

		// fighting loop
		while (fighting) {

			// displays room - monk turn pre-action
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONKS TURN --" << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// monster takes damage of the amount returned by the monks attack 
			// monk attack function has monk action ui
			CreatedMonster.takeDamage(monk.attack());

			// display room - monk turn post-action
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONKS TURN --" << endl;

			// break fighting loop if monster is dead
			if (CreatedMonster.getHealth() < 1) {
				break;
			}

			// result of monks action
			cout << monk.getAction() << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// prompts user and waits for input to conntinue
			cout << endl << "Press enter to start the monsters turn! " << endl;
			getline(cin, ignoredInput);

			// diaplys room - monster turn
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONSTERS TURN --" << endl;

			// monk health changed by getting health and reducing it by the amount returned by monster attack function
			monk.setHealth(monk.getHealth() - CreatedMonster.attack());

			// output monsters action
			cout << CreatedMonster.getAction() << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// prompts user and waits for input to conntinue
			cout << endl << "Press enter to start your turn! " << endl;
			getline(cin, ignoredInput);

			// if monk dead then break fighting loop
			if (monk.getHealth() < 1) {
				break;
			}
		}
	}
	else if (monsterType == 2) {
		Rat CreatedMonster;

		// fighting loop
		while (fighting) {

			// displays room - monk turn pre-action
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONKS TURN --" << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// monster takes damage of the amount returned by the monks attack 
			// monk attack function has monk action ui
			CreatedMonster.takeDamage(monk.attack());

			// display room - monk turn post-action
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONKS TURN --" << endl;

			// break fighting loop if monster is dead
			if (CreatedMonster.getHealth() < 1) {
				break;
			}

			// result of monks action
			cout << monk.getAction() << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// prompts user and waits for input to conntinue
			cout << endl << "Press enter to start the monsters turn! " << endl;
			getline(cin, ignoredInput);

			// diaplys room - monster turn
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONSTERS TURN --" << endl;

			// monk health changed by getting health and reducing it by the amount returned by monster attack function
			monk.setHealth(monk.getHealth() - CreatedMonster.attack());

			// output monsters action
			cout << CreatedMonster.getAction() << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// prompts user and waits for input to conntinue
			cout << endl << "Press enter to start your turn! " << endl;
			getline(cin, ignoredInput);

			// if monk dead then break fighting loop
			if (monk.getHealth() < 1) {
				break;
			}
		}
	}
	else {
		Devil CreatedMonster;

		// fighting loop
		while (fighting) {

			// displays room - monk turn pre-action
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONKS TURN --" << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// monster takes damage of the amount returned by the monks attack 
			// monk attack function has monk action ui
			CreatedMonster.takeDamage(monk.attack());

			// display room - monk turn post-action
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONKS TURN --" << endl;

			// break fighting loop if monster is dead
			if (CreatedMonster.getHealth() < 1) {
				break;
			}

			// result of monks action
			cout << monk.getAction() << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// prompts user and waits for input to conntinue
			cout << endl << "Press enter to start the monsters turn! " << endl;
			getline(cin, ignoredInput);

			// diaplys room - monster turn
			system("cls");
			displayRoomTitle();
			CreatedMonster.printMonster();
			cout << "                       -- MONSTERS TURN --" << endl;

			// monk health changed by getting health and reducing it by the amount returned by monster attack function
			monk.setHealth(monk.getHealth() - CreatedMonster.attack());

			// output monsters action
			cout << CreatedMonster.getAction() << endl;

			// displaying monk and monster stats
			monk.display();
			CreatedMonster.display();

			// prompts user and waits for input to conntinue
			cout << endl << "Press enter to start your turn! " << endl;
			getline(cin, ignoredInput);

			// if monk dead then break fighting loop
			if (monk.getHealth() < 1) {
				break;
			}
		}
	}

	// if monk died then return the monk
	if (monk.getHealth() < 1) {
		return monk;
	}

	monsterdefeated();

	// once room finished prompts user and waits to continue game
	cout << "Press enter to go deeper ..." << endl;
	getline(cin, ignoredInput);

	return monk;
}

void MonsterRoom::setLastAction(string action) {
	lastAction = action;
}

void MonsterRoom::monsterdefeated() {
	// else show monster defeated screen
	system("cls");
	cout << "___  ___                _             ______      __           _           _ " << endl;
	cout << "|  \\/  |               | |            |  _  \\    / _|         | |         | |" << endl;
	cout << "| .  . | ___  _ __  ___| |_ ___ _ __  | | | |___| |_ ___  __ _| |_ ___  __| |" << endl;
	cout << "| |\\/| |/ _ \\| '_ \\/ __| __/ _ \\ '__| | | | / _ \\  _/ _ \\/ _` | __/ _ \\/ _` |" << endl;
	cout << "| |  | | (_) | | | \\__ \\ ||  __/ |    | |/ /  __/ ||  __/ (_| | ||  __/ (_| |" << endl;
	cout << "\\_|  |_/\\___/|_| |_|___/\\__\\___|_|    |___/ \\___|_| \\___|\\__,_|\\__\\___|\\__,_|" << endl;

	// check monster types and do according acion for each
	if (monsterType == 0) {

		// give monk health boost
		cout << "The goblin has an apple! You eat it and get 1 health." << endl;
		monk.setHealth(monk.getHealth() + 1);
	}
	else if (monsterType == 1) {

		// give monk damage buff
		cout << "You find a strength potion in the wizards pocket! Attack Points increased by 1. " << endl;
		monk.damageBuff(1);
	}
	else if (monsterType == 2) {
		cout << "The rat is starting to smell worse." << endl;
	}
	else if (monsterType == 3) {

		// set monk attribute to having the devil be defeated
		cout << "The devil is now your ally and gained Satans Blessing ... New attack unlocked!" << endl;
		monk.defeatedDevil();
	}
}

void MonsterRoom::displayRoomTitle() {
	cout << "___  ___                _             ______" << endl;
	cout << "|  \\/  |               | |            | ___ \\" << endl;
	cout << "| .  . | ___  _ __  ___| |_ ___ _ __  | |_/ /___   ___  _ __ ___ " << endl;
	cout << "| |\\/| |/ _ \\| '_ \\/ __| __/ _ \\ '__| |    // _ \\ / _ \\| '_ ` _ \\ " << endl;
	cout << "| |  | | (_) | | | \\__ \\ ||  __/ |    | |\\ \\ (_) | (_) | | | | | |" << endl;
	cout << "\\_|  |_/\\___/|_| |_|___/\\__\\___|_|    \\_| \\_\\___/ \\___/|_| |_| |_|" << endl;
}