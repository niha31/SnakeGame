#pragma once
#include <iostream>
#include "Snake.h"
#include "Fruit.h"
using namespace std;

class Game
{
public:
	Game();
	~Game();

	void Draw();
	void Update();
	bool gameOver = false;

private:
	void Collision();

	
	int width = 40;
	int height = 20;
	int Score = 0;
	Snake snake;
	Fruit fruit;

};


