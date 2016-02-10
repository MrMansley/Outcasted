// Copyright (c) Chai Nunes 2016
#pragma once

class Vector2 {
private:
	int x = 0, y = 0;
public:
	Vector2(int x, int y) : x(x), y(y) { }
	Vector2() { }

	int getX() { return this->x; }

	int getY() { return this->y; }

	void setX(int x) { this->x = (x >= 0) ? x : 0; }

	void setY(int y) { this->y = (y >= 0) ? y : 0; }

	void set(int x, int y) { this->setX(x); this->setY(y); }

};
