#include <iostream>

#include "v_game.h"
#include "v_input.h"


/*
#include "io.h"
#include "planet.h"
#include "shop.h"
*/

v_input     input;

/*
v_io        io;
v_planet    planet;
v_shop      shop;
*/

using std::cout;
using std::endl;


void v_game::mainMenu()
{
  // Void logo!
  cout << " _    __      _     __\n| |  / /___  (_)___/ /\n| | / / __ \\/ / __  / \n| |/ / /_/ / / /_/ /  \n|___/\\____/_/\\__,_/   \n" << endl;

  cout << "1. Start\n2. Quit\n" << endl;
  switch (input.key())
  {
    case 1:
      // Game code
    break;
    case 2:
      v_game::isRunning = false;
    break;
  }
}

// Misc functions

void v_game::clearScreen()
{
  cout << std::string(100, '\n');
}
