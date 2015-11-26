#include <iostream>
using namespace std;

bool sciezka(int x, int y, int labirynt[5][5]) {
	if (x<0 || y<0 || x>5 || y>5) return false;
	if (x == 0 && y == 0) return true;

	if (labirynt[x + 1][y] == 0) {// w praw¹
		labirynt[x + 1][y] = 2;
		cout << x + 1 << " " << y << endl;
		x += 1;
		sciezka(x, y, labirynt);
	}

	else if (labirynt[x - 1][y] == 0) {// w lew¹
		labirynt[x - 1][y] = 2;
		cout << x - 1 << " " << y << endl;
		x -= 1;
		sciezka(x, y, labirynt);
	}

	else if (labirynt[x][y - 1] == 0) {// w górê
		labirynt[x][y - 1] = 2;
		cout << x << " " << y - 1 << endl;
		y -= 1;
		sciezka(x , y, labirynt);
	}

	else if (labirynt[x][y + 1] == 0) {// w dó³
		labirynt[x][y + 1] = 2;
		cout << x << " " << y + 1 << endl;
		y += 1;
		sciezka(x, y, labirynt);
	}
}

int main(void) {
	int labirynt[5][5], x = 3, y = 0;
	
	for (int i = 0; i < 5; i++) {for (int y = 0; y < 5; y++) {labirynt[i][y] = 1;}}
	labirynt[0][0] = 0;
	labirynt[0][1] = 0;
	labirynt[1][1] = 0;
	labirynt[1][2] = 0;
	labirynt[1][3] = 0;
	labirynt[2][3] = 0;
	labirynt[3][3] = 0;
	labirynt[3][2] = 0;
	labirynt[3][1] = 0;

	for (int i = 0; i < 5; i++) { for (int y = 0; y < 5; y++) { cout << labirynt[y][i]; }cout << endl; }
	cout << "\n\n\n";

	sciezka(x, y, labirynt);

	system("pause");
	return 0;
}