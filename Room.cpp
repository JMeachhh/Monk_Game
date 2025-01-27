#pragma once
#include "pch.h"
#include "Room.h"
#include "Monk.h"
#include "Monster.h"

using namespace std;

Room::Room()
{

	// initialising attributes
	this->ignoredInput = "";
	this->nextRoomType = 0;

	// generating connections
	this->connectionOne = connectionOne;
	this->connectionTwo = connectionTwo;

	this->noOfConnections = 0;
}

Monk Room::action(Monk monk) {
	return monk;
}

int Room::nextRoom(Monk monk){

	// random number of rooms conencted 
	noOfConnections = rand() % 2;

	// checks if the monk has visited 4 rooms 
	if (monk.getRoomsVisited() < 5) {

		// checks connections
		if (noOfConnections == 0) {

			// finds random room type to value 2 as treasure room not available 
			connectionOne = (rand() % 2);
		}
		else if (noOfConnections == 1) {

			// finds random room type to value 2 as treasure room not available 
			connectionOne = (rand() % 2);
			connectionTwo = (rand() % 2);
		}
	}

	// enough rooms have been visited for the treasure room to show
	else {

		// checks connections
		if (noOfConnections == 0) {

			// finds random room type to value 3 as treasure room is available 
			connectionOne = (rand() % 3);
		}

		else if (noOfConnections == 1) {

			// finds random room type to value 2 as treasure room is available 
			connectionOne = (rand() % 3);


			// if other connection is treasure room
			if (connectionOne == 2) {

				// monster or empty room generated
				connectionTwo = rand() % 2;
			}
			else {

				// finds random room type to value 3 as treasure room is available 
				connectionOne = (rand() % 3);
			}
		}
	}

	// next room screen
	system("cls");
	cout << " _   _           _    ______  " << endl;
	cout << "| \\ | |         | |   | ___ \\    " << endl;
	cout << "|  \\| | _____  _| |_  | |_/ /___   ___  _ __ ___ " << endl;
	cout << "| . ` |/ _ \\ \\/ / __| |    // _ \\ / _ \\| '_ ` _ \\ " << endl;
	cout << "| |\\  |  __/>  <| |_  | |\\ \\ (_) | (_) | | | | | |" << endl;
	cout << "\\_| \\_/\\___/_/\\_\\\\__| \\_| \\_\\___/ \\___/|_| |_| |_|" << endl;


	// puts rooms generated in constructor into string
	string optionOne;
	string optionTwo;

	if (connectionOne == 0) {
		optionOne = "Empty Room";
	}
	else if (connectionOne == 1) {
		optionOne = "Monster Room";
	}
	else if (connectionOne == 2) {
		optionOne = "Treasure Room";
	}

	if (connectionTwo == 0) {
		optionTwo = "Empty Room";
	}
	else if (connectionTwo == 1) {
		optionTwo = "Monster Room";
	}
	else if (connectionTwo == 2) {
		optionTwo = "Treasure Room";
	}


	// checks number of connections
	if (noOfConnections == 0) {

		cout << "This room has only one exit!" << endl;

		// prompt user and wait for any input
		cout << "Press enter to proceed to " << optionOne << "!" << endl;
		getline(cin, ignoredInput);

		// sets next room to the connection
		nextRoomType = connectionOne;
		return nextRoomType;
	}
	else if (noOfConnections == 1) {

		// error catching while loop
		while (true)
		{

			// prompt user with choice of rooms
			cout << "This room has two exits! Choose which way you want to go :" << endl;
			cout << "(1) " << optionOne << "!" << endl;
			cout << "(2) " << optionTwo << "!" << endl;
			getline(cin, roomChoice);

			// check choice and set next room as corresponding choice
			if (roomChoice == "1") {
				nextRoomType = connectionOne;
				return nextRoomType;
			}
			if (roomChoice == "2") {
				nextRoomType = connectionTwo;
				return nextRoomType;
			}

			// error message
			cout << "Please enter a correct response!" << endl;
		}
	}
}

// get and set functions

void Room::getConnectors() {
	cout << "The room is connected to " << connectionOne << ", " << connectionTwo << endl;
}

int Room::getNextRoom() {
	return nextRoomType;
}


// function for displaying room titles
void Room::displayRoomTitle() {
	cout << "no room" << endl;
}