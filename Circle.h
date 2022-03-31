#pragma once
#include "Point.h"

class Circle : public Point
{
public:
	Circle(Framework* f_, int x_, int y_, int r_, int c_) : Point(f_, x_, y_, c_) 
	{
		angle = 320;
		radius = r_;
	}
	void Hide();
protected:
	int radius;
	int angle;
	virtual void Show();
	virtual void ChangeEndAngle();
};

