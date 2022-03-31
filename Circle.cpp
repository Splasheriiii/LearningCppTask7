#include "Circle.h"
void Circle::Show()
{
	framework->draw_circle(x,y,color,radius, angle);
}
/// <summary>
/// Устанавливает рандомный размер "рта" круга
/// </summary>
void Circle::ChangeEndAngle()
{
	angle = rand() % 120 + 240;
}
void Circle::Hide()
{
	framework->draw_circle(x, y, framework->get_bk(), radius, 360);
}
