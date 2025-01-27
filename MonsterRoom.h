#pragma once
#include "pch.h"
#include "Monk.h"
#include "Room.h"	

class MonsterRoom : public Room{
public:
	MonsterRoom(Monk monk);

	// get and set
	void setLastAction(string action);
	void monsterdefeated();

	void displayRoomTitle();
	Monk action();
private:
	int monsterType;
	string lastAction;
	Monk monk;
	string ignoredInput;
};