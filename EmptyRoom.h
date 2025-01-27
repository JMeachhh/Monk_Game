#pragma once
#include "pch.h"
#include "Monk.h"

class EmptyRoom : public Room {
public:
	EmptyRoom(Monk monk);
	Monk action();
	void displayRoomTitle();
private:
	int option;
	Monk monk;
	string ignoredInput;
};