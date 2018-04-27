#include <iostream>
#include <Windows.h>
using namespace std;

void gotoString(int x, int y)
{
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}
int temp = 0;
void showField(int cords[][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << cords[i][j] << "\t";
		
			temp = j;
		}
		cout << endl << endl;		
	}
}