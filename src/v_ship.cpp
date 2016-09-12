#include <iostream>
#include "v_ship.h"
#include "v_input.h"
#include "v_game.h"
#include "v_planet.h"

v_input			input;
v_game			game;
v_planet		planet;

using namespace std;

v_ship::v_ship()
{
	v_ship::engine = 2;
	v_ship::weapons = 2;
	v_ship::storage = 2;
	v_ship::cabin = 2;
	
	v_ship::health = 100;
	v_ship::cash = 0;
}

void v_ship::getEngine()
{
  switch (v_ship::engine)
  {
    case 0:
      cout << "Rollers Boosters 1.0" << endl;
    break;
    case 1:
      cout << "Rollers Boosters 2.0" << endl;
    break;
    case 2:
      cout << "Rollers Boosters 3.0" << endl;
    break;
    case 3:
      cout << "HyperY Quad Y" << endl;
    break;
    case 4:
       cout << "Hyper Quad X" << endl;
    break;
  }
}

void v_ship::getWeapons()
{
  switch (v_ship::weapons)
  {
    case 0:
      cout << "None" << endl;
    break;
    case 1:
      cout << "Clock Beam 17" << endl;
    break;
    case 2:
      cout << "Barista 5000" << endl;
    break;
    case 3:
      cout << "SpaceLoop Extreme" << endl;
    break;
  }
} 

void v_ship::getStorage()
{
  switch (v_ship::storage)
  {
    case 0:
      cout << "None" << endl;
    break;
    case 1:
      cout << "Kwbbel Mini" << endl;
    break;
    case 2:
      cout << "Kwbbel Medium" << endl;
    break;
    case 3:
      cout << "Kwbbel Large" << endl;
    break;
  }
}

void v_ship::getCabin()
{
  switch (v_ship::engine)
  {
    case 0:
      cout << "Basic" << endl;
    break;
    case 1:
      cout << "ICEA Friby" << endl;
    break;
    case 2:
      cout << "ICEA Extravik" << endl;
    break;
    case 3:
      cout << "ICEA Golvsida" << endl;
    break;
    case 4:
       cout << "Daminium Premium Suite" << endl;
    break;
  }
}

void v_ship::shipScreen()
{
	cout << "Ship Menu\n\nEngine: ";
  v_ship::getEngine();

  cout << "Weapons: ";
  v_ship::getWeapons();

  cout << "Storage: ";
  v_ship::getStorage();

  cout << "Cabin: ";
  v_ship::getCabin();
  
  cout << "\nHealth: " << v_ship::health << endl;
  
  cout << "Cash: " << v_ship::cash << endl;

  cout << "\nCurrent planet: #" << planet.getPlanet() << endl;

  cout << "\n1. Back\n" << endl;

  switch (input.key())
  {
    case 1:
      game.clearScreen();
      game.mainGame();
    break;
    default:
      game.clearScreen();
      v_ship::shipScreen();
    break;
  }
}