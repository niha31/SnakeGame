#include "pch.h"
#include "Game.h"
#include "Snake.h"


Game::Game()
{
}

Game::~Game()
{
}

void Game::Update()
{
		snake.Update();
		Collision();
}

void Game::Draw()
{
	system("cls");
	for (int i = 0; i <= width; i++)
	{
		cout << "#";
	}
	cout << endl;

	for (int i = 0; i <= height - 1; i++)
	{
		for (int j = 0; j <= width; j++)
		{
			if(j == 0)
			{
				cout << "#";
			}
			else if (j == width)
			{
				cout << "#";

			}
			else if (fruit.GetX() == j && fruit.GetY() == i)
			{
				cout << "X";
			}
			else if(snake.GetX() == j && snake.GetY() == i )
			{
				cout << "O";				
			}
			else
			{
				bool TailDrawn = false;
				for (int k = 0; k < snake.nTail; k++)
				{
					
					if (snake.GetTailX(k) == j && snake.GetTailY(k) == i)
					{
						cout << "o";
						TailDrawn = true;
					}
				}

				if (!TailDrawn)
				{
					cout << " ";
				}
			}
			


		}
		cout << endl;
	}

	for (int i = 0; i <= width; i++)
	{
		cout << "#";
	}
	cout << endl;

	cout << "Score: " << Score << endl;
}

void Game::Collision()
{
	if (snake.GetX() == fruit.GetX() && snake.GetY() == fruit.GetY())
	{
		fruit.Update();
		Score++;
		snake.nTail++;
	}
	for (int i = 1; i < snake.nTail; i++)
	{
		if (snake.GetX() == snake.GetTailX(i) && snake.GetY() == snake.GetTailY(i))
		{
			gameOver = true;
			system("cls");
			cout << "GAME OVER" << endl;
			cout << "Score: " << Score << endl;
		}
	}
	
}
