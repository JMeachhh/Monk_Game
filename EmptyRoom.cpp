#pragma once
#include "pch.h"
#include "Room.h"
#include "EmptyRoom.h"

EmptyRoom::EmptyRoom(Monk monk) {
	this->option = 0;
	this->monk = monk;
	this->ignoredInput = "";
}

Monk EmptyRoom::action() {
	// displays room
	system("cls");
	displayRoomTitle();

	// if at max health
	if (monk.getHealth() > 14) {

		// no need to pray so output only
		cout << "You are already max health!" << endl;
	}
	else {

		// prompts user
		string option;
		cout << "You can pray if you want" << endl;

		// error catching while loop
		while (true) {
			cout << "Do you want to pray yes(1) or no(2): " << endl;
			getline(cin, option);

			// if said yes to pray
			if (option == "1") {

				// restore health to full and break erorr loop
				monk.setHealth(15);
				cout << "You're health has been regenerated!" << endl;
				break;
			}

			// if they decided not to pray
			if (option == "2") {

				// dont restore health to full and break erorr loop
				cout << "You have decided not to pray" << endl;
				break;
			}

			// error catching
			else {
				cout << "Please enter an appropriate answer!" << endl;
			}
		}
	}

	// once room finished prompts user and waits to continue game
	cout << "Press enter to go deeper ..." << endl;
	getline(cin, ignoredInput);

	return monk;
}

void EmptyRoom::displayRoomTitle() {
	cout << " _____                _          ______" << endl;
	cout << "|  ___|              | |         | ___ \\ " << endl;
	cout << "| |__ _ __ ___  _ __ | |_ _   _  | |_/ /___   ___  _ __ ___  " << endl;
	cout << "|  __| '_ ` _ \\| '_ \\| __| | | | |    // _ \\ / _ \\| '_ ` _ \\ " << endl;
	cout << "| |__| | | | | | |_) | |_| |_| | | |\\ \\ (_) | (_) | | | | | |" << endl;
	cout << "\\____/_| |_| |_| .__/ \\__|\\__, | \\_| \\_\\___/ \\___/|_| |_| |_|" << endl;
	cout << "               | |         __/ |  " << endl;
	cout << "               |_|        |___/  " << endl;
}