#pragma once
#include "pch.h"
#include "Room.h"
#include "TreasureRoom.h"

TreasureRoom::TreasureRoom(Monk monk) {
	this->ignoredInput = "";
	this->monk = monk;
}

Monk TreasureRoom::action() {
	// display win screen
	system("cls");
	displayRoomTitle();
	monk.foundTreasure();

	return monk;
}

void TreasureRoom::displayRoomTitle() {
	cout << " _____                                  ______  " << endl;
	cout << "|_   _|                                 | ___ \\ " << endl;
	cout << "  | |_ __ ___  __ _ ___ _   _ _ __ ___  | |_/ /___   ___  _ __ ___ " << endl;
	cout << "  | | '__/ _ \\/ _` / __| | | | '__/ _ \\ |    // _ \\ / _ \\| '_ ` _ \\ " << endl;
	cout << "  | | | |  __/ (_| \\__ \\ |_| | | |  __/ | |\\ \\ (_) | (_) | | | | | |" << endl;
	cout << "  \\_/_|  \\___|\\__,_|___/\\__,_|_|  \\___| \\_| \\_\\___/ \\___/|_| |_| |_|" << endl;
}