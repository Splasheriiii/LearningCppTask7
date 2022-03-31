#pragma once
#include "Framework.h"
class Point
{
public:
	Point(Framework* f_, int x_, int y_, int c_) : framework(f_), x(x_), y(y_), color(c_) {}
	void Fly(int);
protected:
	int x, y;
	Framework* framework;
	int color;
	void Locate(int*, int*);
	void ChangeColor();
	virtual void ChangeEndAngle() = 0;
	int GetMaxX();
	int GetMaxY();
	virtual void Show() = 0;
	virtual void Hide() = 0;
};

