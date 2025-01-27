#pragma once
#include "pch.h"
#include "Monk.h"
#include "Room.h"	

class TreasureRoom : public Room {
public:
	TreasureRoom(Monk monk);

	Monk action();
	void displayRoomTitle();
private:

	Monk monk;
	string ignoredInput;
};