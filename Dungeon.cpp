#pragma once
#include "pch.h"
#include "Room.h"
#include "EmptyRoom.h"
#include "MonsterRoom.h"
#include "TreasureRoom.h"
#include "Monk.h"

using namespace std;

int main() {

	// variable instantiation
	string ignored;
	string diffChoice;
	Monk monk;
	string menuChoice;

	// creating new seed of random numbers from the current time
	srand(time(0));

	// title  screen
	cout << " _____                    _                       __    _____         " << endl;
	cout << "|_   _|                  | |                     / _|  |_   _|" << endl;
	cout << "  | |    ___   _ __ ___  | |__   ___       ___  | |_     | |    ___  _ __  _ __   ___   _ __" << endl;
	cout << "  | |   / _ \\ | '_ ` _ \\ | '_ \\ / __|     / _ \\ |  _|    | |   / _ \\| '__|| '__| / _ \\ | '__|" << endl;
	cout << "  | |  | (_) || | | | | || |_) |\\__ \\    | (_) || |      | |  |  __/| |   | |   | (_) || | " << endl;
	cout << "  \\_/   \\___/ |_| |_| |_||_.__/ |___/     \\___/ |_|      \\_/   \\___||_|   |_|    \\___/ |_| " << endl;
	cout << endl << "Press enter to begin .. " << endl;
	getline(cin, ignored);
	

	// while in menu scene
	while (true) {

		// menu screen
		system("cls");
		cout << "___  ___" << endl;
		cout << "|  \\/  | " << endl;
		cout << "| .  . | ___ _ __  _   _ " << endl;
		cout << "| |\\/| |/ _ \\ '_ \\| | | |" << endl;
		cout << "| |  | |  __/ | | | |_| |" << endl;
		cout << "\\_|  |_/\\___|_| |_|\\__,_|" << endl;
		cout << "Choose your option!" << endl;
		cout << "(1) Set Difficulty" << endl;
		cout << "(2) How to play" << endl;
		cout << "(3) Enter the dungeon ..." << endl;
		getline(cin, menuChoice);


		// receives input
		// input statement using input
		if (menuChoice == "1") {

			// difficulty screen
			system("cls");
			cout << "_____ _  __  __ _            _ _ " << endl;
			cout << "|  _ \\(_)/ _|/ _(_)          | | | " << endl;
			cout << "| | | |_| |_| |_ _  ___ _   _| | |_ _   _ " << endl;
			cout << "| | | | |  _|  _| |/ __| | | | | __| | | |" << endl;
			cout << "| |/ /| | | | | | | (__| |_| | | |_| |_| |" << endl;
			cout << "|___/ |_|_| |_| |_|\\___|\\__,_|_|\\__|\\__, |" << endl;
			cout << "                                     __/ |" << endl;
			cout << "                                    |___/ " << endl;

			// error catching while loop
			while (true) {
				cout << "Choose difficulty: " << endl;
				cout << "(1) Easy" << endl;
				cout << "(2) Normal" << endl;
				cout << "(3) Hard" << endl;
				cout << "(4) Hellmode" << endl;
				getline(cin, diffChoice);

				// sets difficulty based off choice
				if (diffChoice == "1") {
					monk.setHealth(20);
					monk.setDamage(4);
					break;
				}
				if (diffChoice == "2") {
					break;
				}
				if (diffChoice == "3") {
					monk.setHealth(12);
					monk.setDamage(2);
					break;
				}
				if (diffChoice == "4") {
					monk.setHealth(10);
					monk.setDamage(1);
					break;
				}

				// if none of the choices are entered then throw exception and prompt user again
				cout << "Enter an appropriate option!" << endl;
			}
		}
		if (menuChoice == "2") {

			// instruction screen
			system("cls");
			cout << " _____          _                   _   _               " << endl;
			cout << "|_   _|        | |                 | | (_) " << endl;
			cout << "  | | _ __  ___| |_ _ __ _   _  ___| |_ _  ___  _ __  ___" << endl;
			cout << "  | || '_ \\/ __| __| '__| | | |/ __| __| |/ _ \\| '_ \\/ __|" << endl;
			cout << " _| || | | \\__ \\ |_| |  | |_| | (__| |_| | (_) | | | \\__ \\" << endl;
			cout << " \\___/_| |_|___/\\__|_|   \\__,_|\\___|\\__|_|\\___/|_| |_|___/" << endl;
			cout << "					  --HOW TO WIN --" << endl;
			cout << "# Get buffs and bonus health by defeating Monsters ( A secret ability can be unlocked too )" << endl;
			cout << "# Travel through the rooms to find the treasure and beat the game! " << endl;
			cout << endl << "             -- COMBAT --" << endl;
			cout << "    -- Monk --" << endl;
			cout << "# Attack Points is how much damage you will do per attack" << endl;
			cout << "# Holy Water is your main attack which will hit 50% of the time" << endl;
			cout << "# Enlightenment only hits 33% of the time however it does an extra 1 damage" << endl;
			cout << endl << "    -- Monsters --" << endl;
			cout << "# There are multiple different monsters with different attacks, damage and health" << endl;
			cout << "# A monster has set attack points that they will deal every successful attack" << endl;
			cout << endl << "Press enter to return to the menu" << endl;

			// waits for user input then carrys on code which will continue the loop
			getline(cin, ignored);
		}

		if (menuChoice == "3") {
			
			// choice to start game so breaks menu loop
			break;
		}
	}
	
	// monk personalisation screen
	system("cls");
	cout << "___  ___               _  " << endl;
	cout << "|  \\/  |              | | " << endl;
	cout << "| .  . |  ___   _ __  | | __" << endl;
	cout << "| |\\/| | / _ \\ | '_ \\ | |/ /" << endl;
	cout << "| |  | || (_) || | | ||   < " << endl;
	cout << "\\_|  |_/ \\___/ |_| |_||_|\\_\\ " << endl;
	monk.personaliseMonk();

	// entrance screen
	system("cls");
	cout << " _____        _   " << endl;
	cout << "|  ___|      | | " << endl;
	cout << "| |__  _ __  | |_  _ __  __ _  _ __    ___  ___" << endl;
	cout << "|  __|| '_ \\ | __|| '__|/ _` || '_ \\  / __|/ _ \\" << endl;
	cout << "| |___| | | || |_ | |  | (_| || | | || (__|  __/" << endl;
	cout << "\\____/|_| |_| \\__||_|   \\__,_||_| |_| \\___|\\___|" << endl;
	cout << "      ______" << endl;
	cout << "   ,-' ;  ! `-." << endl;
	cout << "  / :  !  :  . \\" << endl;
	cout << " |_ ;   __:  ;  |" << endl;
	cout << " )| .  :)(.  !  |" << endl;
	cout << " |\"    (##)  _ | " << endl;
	cout << " |  :  ;`'  (_) (" << endl;
	cout << " |  :  :  .     |" << endl;
	cout << " )_ !  ,  ;  ;  |" << endl;
	cout << " || .  .  :  :  |" << endl;
	cout << " |\" . | :  . | " << endl;
	cout << " |_____;----.___|" << endl;

	// shows previously inputted attributes
	monk.display();

	// prompts user then waits for input to continue
	cout << endl << "Press enter to open the door" << endl;
	getline(cin, ignored);

	// Starts in a monster room
	int nextRoom;
	Room room;

	// gameplay loop
	while (true) {
		// shows next room choice screen
		nextRoom = room.nextRoom(monk);

		if (nextRoom == 0) {
			EmptyRoom EmptyRoom(monk);

			// gets the monk to perform the room action
			monk = EmptyRoom.action();

		}
		else if (nextRoom == 1){
			MonsterRoom MonsterRoom(monk);

			// gets the monk to perform the room action
			monk = MonsterRoom.action();

		}
		else if (nextRoom == 2) {
			TreasureRoom TreasureRoom(monk);

			// gets the monk to perform the room action
			monk = TreasureRoom.action();
		}

		// increment monk rooms visited
		monk.newRoom();

		// checking if monk is dead
		if (monk.getHealth() < 1) {

			// game over screen
			system("cls");
			cout << " _____                        _____    " << endl;
			cout << "|  __ \\                      |  _  | " << endl;
			cout << "| |  \\/ __ _ _ __ ___   ___  | | | |_   _____ _ __" << endl;
			cout << "| | __ / _` | '_ ` _ \\ / _ \\ | | | \\ \\ / / _ \\ '__|" << endl;
			cout << "| |_\\ \\ (_| | | | | | |  __/ \\ \\_/ /\\ V /  __/ |  " << endl;
			cout << " \\____/\\__,_|_| |_| |_|\\___|  \\___/  \\_/ \\___|_| " << endl;
			cout << "         _______________" << endl;
			cout << "        /               \\" << endl;
			cout << "       /                 \\" << endl;
			cout << "      /                   \\" << endl;
			cout << "      |   XXXX     XXXX   |" << endl;
			cout << "      |   XXXX     XXXX   |" << endl;
			cout << "      |   XXX       XXX   |" << endl;
			cout << "      |                   |" << endl;
			cout << "      \\__      XXX     __/" << endl;
			cout << "        |\\     XXX     /|" << endl;
			cout << "        | |           | |" << endl;
			cout << "        | I I I I I I I |" << endl;
			cout << "        |  I I I I I I  |" << endl;
			cout << "         \\_           _/" << endl;
			cout << "          \\_         _/" << endl;
			cout << "            \\_______/" << endl;
			cout << endl <<  "--------YOU HAVE BEEN DEFEATED!--------";
			break;
		}

		// checking if monk found the treasure
		if (monk.gotTreasure()) {

			// win screen
			cout << "                    ____...------------...____" << endl;
			cout << "               _.-\"` / o / __ ____ __ __  __ \\o\\_`\"-._" << endl;
			cout << "             .'     / /                    \\ \\     '." << endl;
			cout << "             |=====/o/======================\\o\\=====|" << endl;
			cout << "             |____/_/________..____..________\\_\\____|" << endl;
			cout << "             /   _/ \\_     <_o#\\__/#o_>     _/ \\_   \\" << endl;
			cout << "             \\_________\\####/_________/" << endl;
			cout << "              |===\\!/========================\\!/===|" << endl;
			cout << "              |   |=|          .---.         |=|   |" << endl;
			cout << "              |===|o|=========/     \\========|o|===|" << endl;
			cout << "              |   | |         \\() ()/        | |   |" << endl;
			cout << "              |===|o|======{'-.) A (.-'}=====|o|===|" << endl;
			cout << "              | __/ \\__     '-.\\uuu/.-'    __/ \\__ |" << endl;
			cout << "              |==== .'.'^'.'.====|" << endl;
			cout << "              |  _\\o/   __  {.' __  '.} _   _\\o/  _|" << endl;
			cout << endl << " ----------------------- YOU FOUND THE TREASURE! ----------------------------";
			break;
		}
	}
}