#include <iostream>
#include "v_input.h"

using namespace std;

int main()
{
	v_input input;
	
	// Void logo //
	cout << " _    __      _     __\n| |  / /___  (_)___/ /\n| | / / __ \\/ / __  / \n| |/ / /_/ / / /_/ /  \n|___/\\____/_/\\__,_/   \n" << endl;
	
	cout << "1. Start\n2. Quit\n" << endl;
	cout << input.key() << endl;
}