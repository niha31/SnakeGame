#include "pch.h"
#include <iostream>
#include "Game.h"
#include "Snake.h"

int main()
{
	Game game;
	while (!game.gameOver)
	{
		game.Update();
		game.Draw();
	}
	return 0;
}

