#pragma once
class Fruit
{
public:
	Fruit() {};
	~Fruit() {};

private:
	int fruitX;
	int fruitY;

	friend class Game;
};

