#include "pch.h"
#include "Snake.h"


Snake::Snake()
{
	HeadX = 20;
	HeadY = 17;
}


Snake::~Snake()
{
}

void Snake::Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'w':
			up = true;
			left = false;
			down = false;
			right = false;
			break;
		case 'a':
			left = true;
			up = false;
			down = false;
			right = false;
			break;
		case 's':
			down = true;
			up = false;
			left = false;
			right = false;
			break;
		case 'd':
			right = true;
			up = false;
			left = false;
			down = false;
			break;
		}
	}
}

void Snake::Update()
{
	Input();
	if (right)
	{
		HeadX++;
	}

	if (left)
	{
		HeadX --;
	}

	if (up)
	{
		HeadY --;
	}

	if (down)
	{
		HeadY++;
	}

	preX = TailX[0];
	preY = TailY[0];
	TailX[0] = HeadX;
	TailY[0] = HeadY;
	
	for (int i = 1; i < nTail; i++)
	{
		pre2X = TailX[i];
		pre2Y = TailY[i];
		TailX[i] = preX;
		TailY[i] = preY;
		preX = pre2X;
		preY = pre2Y;
	}
	Wrap();
}

void Snake::Wrap()
{
	if (HeadX < 0)
	{
		HeadX = 39;
	}

	if (HeadX > 40)
	{
		HeadX = 1;
	}

	if (HeadY < 0)
	{
		HeadY = 19;
	}

	if (HeadY > 20)
	{
		HeadY = 1;
	}
}

int Snake::GetX()
{
	return HeadX;
}

int Snake::GetY()
{
	return HeadY;
}

int Snake::GetTailX(int i)
{
	return TailX[i];
}

int Snake::GetTailY(int i)
{
	return TailY[i];
}