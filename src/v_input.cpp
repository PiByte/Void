#include <iostream>
#include "v_input.h"

using namespace std;

int v_input::key()
{
	cout << "Enter: ";
	int a;
	cin >> a;
	return a;
}