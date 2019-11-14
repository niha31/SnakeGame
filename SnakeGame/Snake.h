#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class Snake
{
public:
	Snake();
	~Snake();

	void Update();
	int GetX();
	int GetY();
	int GetTailX(int i);
	int GetTailY(int i);

	int nTail = 0;

private:
	void Input();
	void Wrap();

	int HeadX, HeadY;
	int TailX[100], TailY[100], preX, preY, pre2X, pre2Y;
	bool up, down, left, right;
};

