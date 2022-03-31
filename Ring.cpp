#include "Ring.h"
void Ring::Show()
{
	framework->draw_ring(x,y,color,radius,width, angle, innerAngle);
}

void Ring::ChangeEndAngle()
{
	angle = rand() % 120 + 240;
	innerAngle = rand() % 220 + 140;
}
