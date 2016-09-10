#include <iostream>

#include "v_game.h"

using namespace std;

int main()
{
	v_game 			game;

	game.clearScreen();

	game.mainMenu();

	while (!game.isRunning)
	{
		cout << "Quitting..." << endl;
		return 1;
	}
}
