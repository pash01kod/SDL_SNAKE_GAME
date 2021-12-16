#pragma once

#include <deque>
#include "Snake.h"
#include "Fruit.h"
#include <stdio.h>
#include <SDL.h>

class Game
{
public:

	Game();
	~Game();

	int run();
	bool tick();
	void draw();

	void generateFruit();

	const static auto Width = 1280;
	const static auto Height = 720;

private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Texture* sprites;

	Snake s;
	Fruit f;

	std::deque<std::pair<int, int> > segmentsList;
	unsigned ticks = 0;

	
};

