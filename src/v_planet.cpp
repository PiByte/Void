#include <iostream>
#include "v_planet.h"

int v_planet::newPlanet()
{
  // Generate random number and return it
  int planet = 1111 + rand() % (9999 - 1111 + 1);
  v_planet::currentPlanet = planet;
  return planet;
}

int v_planet::getPlanet()
{
  return v_planet::currentPlanet;
}
