#pragma once
#include <stdlib.h>
#include <time.h>

class Fruit
{
public:
	Fruit();
	~Fruit();
	int GetX();
	int GetY();
	void Update();

private:
	int x, y;
};

