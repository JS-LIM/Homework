#pragma once
#include "GeometricObject.h"

void drawSquare(const int& edge, const int& i0, const int& j0, const float& red, const float& green, const float& blue);

class Box : public GeometricObject 
{

public:
	int start_x, start_y;
	int edge;

	Box(const int& _edge, const int& _start_x, const int& _start_y) 
	{
		initialize(_edge, _start_x, _start_y);
	}

	void initialize(const int& _edge, const int& _start_x, const int& _start_y);
	void draw();
};