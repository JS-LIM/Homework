#pragma once
#include "GeometricObject.h"

void drawUpArrow(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue);

class UpArrow : public GeometricObject
{
public:
	int start_x, start_y;
	int end_x, end_y;
	
	UpArrow(const int& _start_x, const int& _start_y, const int& _end_x, const int& _end_y) 
	{
		initialize(_start_x, _start_y, _end_x, _end_y);
	}
	void initialize(const int& _start_x, const int& _start_y, const int& _end_x, const int& _end_y);

	void draw();
};
