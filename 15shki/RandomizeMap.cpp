#include "Numbers.cpp"
#include "RandomNumber.h"


void randomizeMap(int cords[][4]) {
	Numbers mass[17];
	for (int i = 0; i <= 16; i++) {
		mass[i].number = i;
		mass[i].full = 0;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			int rand = randomNumber(0, 15);
			while (mass[rand].full == 1) {
				rand = randomNumber(0, 15);
			}
			cords[i][j] = mass[rand].number;
			mass[rand].full = 1;
		}
	}
}