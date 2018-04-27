//#include <iostream>

//using namespace std;

void changePosition(int cords[][4], int dir) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (cords[i][j] == 0) {
				//cout << endl << i << " " << j << endl;
				switch (dir)
				{
				case 1:
				{
					if (i > 0) {
						cords[i][j] = cords[i - 1][j]; // up
						cords[i - 1][j] = 0;
						cords[i--][j];
					}
				}break;
				case 2:
				{
					if (i < 3) {
						cords[i][j] = cords[i + 1][j];  //down
						cords[i + 1][j] = 0;
						cords[i++][j];
					}
				}break;
				case 3:
				{
					if (j < 3) {
						cords[i][j] = cords[i][j + 1]; //right
						cords[i][j + 1] = 0;
						cords[i++][j];
					}
				}break;
				case 4:
				{
					if (j > 0) {
						cords[i][j] = cords[i][j - 1]; //left
						cords[i][j - 1] = 0;
						cords[i][j];
					}

				}break;
				default:
					break;
				}
			}

		}
	}
}