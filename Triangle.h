#pragma once
#include "GeometricObject.h"
void drawTriangle(const int& i0, const int& j0, const float& red, const float& green, const float& blue);

class Triangle : public GeometricObject 
{
public:
	int start_x, start_y;
	int end_x, end_y;
	Triangle(const int& _start_x, const int& _start_y, const int& _end_x, const int& _end_y) 
	{
		initialize(_start_x, _start_y, _end_x, _end_y);
	}
	void initialize(const int& _start_x, const int& _start_y, const int& _end_x, const int& _end_y);

	void draw();
};
