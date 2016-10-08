#include "RightArrow.h"

void RightArrow::initialize(const int& _start_x, const int& _start_y, const int& _end_x, const int& _end_y) 
{
	start_x = _start_x;
	start_y = _start_y;
	end_x = _end_x;
	end_y = _end_y;
}

void RightArrow::draw() 
{
	drawRightArrow(start_x, start_y, end_x, end_y, 1.0f, 0.0f, 0.0f);
}
