#include <iostream>
#include "v_ship.h"

using namespace std;

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
