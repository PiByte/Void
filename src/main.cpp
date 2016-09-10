#include <iostream>

#include "v_input.h"
#include "v_game.h"

using namespace std;

int main()
{
	v_input input;
	v_game game;

	// Void logo //
	cout << " _    __      _     __\n| |  / /___  (_)___/ /\n| | / / __ \\/ / __  / \n| |/ / /_/ / / /_/ /  \n|___/\\____/_/\\__,_/   \n" << endl;

	cout << "1. Start\n2. Quit\n" << endl;
	switch (input.key())
	{
		case 1:
			game.clearScreen();
			game.mainScreen();
		break;
		case 2:
			return 1;
		break;
	}
}
