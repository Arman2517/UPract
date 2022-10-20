#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<Windows.h>

using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir; 

void Setup() {
	dir = STOP;
	gameOver = false;
	x = width / 2 - 1;
	y = height / 2 - 1;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

int main() {
	Setup();
	while (!gameOver) {
		if (score >= 20)
			Sleep(150);
		else if (score >= 40)
			Sleep(100);
		else if (score >= 70)
			Sleep(50);
		else if (score >= 100)
			Sleep(20);

		Sleep(200);
		Input();
		Logic();
		Draw();
	}

	return 0;
}