#pragma once
#include "pch.h"
#include "Monk.h"

using namespace std;

class Room {
public:
	Room();
	
	// get and set functions
	void getConnectors();
	int getNextRoom();

	// room functions;
	void displayRoomTitle();
	Monk action(Monk monk);
	int nextRoom(Monk monk);
	
private:

	// core attributes
	int roomType;
	Monk monk;
	string roomChoice;
	int nextRoomType;

	// room dependant attributes
	int noOfConnections;
	int connectionOne;
	int connectionTwo;

	// other
	string ignoredInput;
	
	
	
};