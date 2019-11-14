#include "pch.h"
#include "Fruit.h"


Fruit::Fruit()
{
	x = rand() % 40 + 1;
	y = rand() % 20 + 1;
}


Fruit::~Fruit()
{
}

void Fruit::Update()
{
	x = rand() % 40 + 1;
	y = rand() % 20 + 1;
}

int Fruit::GetX()
{
	return x;
}

int Fruit::GetY()
{
	return y;
}