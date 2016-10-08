#pragma once

#include "GeometricObject.h"

void drawCircle(const int& x_center, const int& y_center, const int& r, const int& red, const int& green, const int& blue);
class Circle : public GeometricObject
{

public:
	int start_x, start_y;
	int r;
	Circle(const int& _start_x, const int& _start_y, const int& _r)
	{
		initialize(_start_x, _start_y, _r);
	}

	void initialize(const int& _start_x, const int& _start_y, const int& _r);

	void draw();
};