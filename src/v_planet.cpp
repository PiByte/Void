#include <iostream>
#include <stdlib.h>
#include "v_planet.h"

v_planet::v_planet()
{
	v_planet::currentPlanet = 5165;
}

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
