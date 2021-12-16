#pragma once

class Snake {
public: 
	Snake() {};

	~Snake() {};

	static const auto HeadOpenMouth = 0;
	static const auto Tail = 1;
	static const auto Turn = 2;
	static const auto Straight = 3;
	static const auto Head = 4;
	static const auto Fruit = 5;

private:

	int dx = 1;
	int dy = 0;

	friend class Game;
};