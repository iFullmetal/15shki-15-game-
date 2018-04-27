#include <iostream>
#include <ctime>
#include "RandomizeMap.h"
#include "ChangePosition.h"
#include "showField.h"
#include <string>

#define UP 1
#define DOWN 2
#define RIGHT 3
#define LEFT 4
using namespace std;

void main()
{
	srand(time(NULL));
	int cords[4][4];
	randomizeMap(cords);
	string dir;
	string up = "up";
	string down = "down";
	string right = "right";
	string left = "left";
	while (true) {
		showField(cords);
		cin >> dir;
		if (dir == up) {
			changePosition(cords, UP);
		}
		if (dir == down) {
			changePosition(cords, DOWN);
		}
		if (dir == right) {
			changePosition(cords, RIGHT);
		}
		if (dir == left) {
			changePosition(cords, LEFT);
		}
	}

	system("pause");
}