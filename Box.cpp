#include "Box.h"

void Box::initialize(const int& _edge, const int& _start_x, const int& _start_y)
{
	start_x = _start_x;
	start_y = _start_y;
	edge = _edge;
}

void Box::draw() 
{
	drawSquare(edge, start_x, start_y, 0.0f, 1.0f, 0.0f);
}
