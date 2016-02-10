// Copyright (c) Chai Nunes 2016
#pragma once
#include <iostream>
#include "Vector2.h"

using namespace std;

class Entity {
public:
	char id = '?';
	Vector2 pos = Vector2();

	Entity(char id, Vector2 pos) : id(id), pos(pos) { }
	Entity(char id) : id(id) { }
	Entity(Vector2 pos) : pos(pos) { }
	Entity() { }

	void draw() {
		//cursorAt(this->pos.x, this->pos.y)
		putchar(this->id);
	}
};
