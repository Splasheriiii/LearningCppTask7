#pragma once
#include "Circle.h"
class Ring : public Circle
{
public:
	Ring(Framework* f_, int x_, int y_, int r_, int w_, int c_) : Circle(f_, x_, y_, r_, c_)
	{
		width = w_;
		innerAngle = 320;
	}
protected:
	int width;
	int innerAngle;
	virtual void Show();
	virtual void ChangeEndAngle();
};