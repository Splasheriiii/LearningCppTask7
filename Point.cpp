#include "Point.h"
#include <cstdlib>
#include <windows.h>
#include <WinUser.h>

const unsigned short MSB = 0x8000;
bool listenKeyPress(short p_key);

void Point::Locate(int* xl, int* yl)
{
	*xl = x;
	*yl = y;
}
/// <summary>
/// Устанавливает рандомный цвет из 15 доступных, кроме чёрного
/// </summary>
void Point::ChangeColor()
{
	color = rand() % 15 + 1;
}
int Point::GetMaxX()
{
	return framework->get_x();
}
int Point::GetMaxY()
{
	return framework->get_y();
}
void Point::Fly(int cost)
{
	int xx, yy;
	Locate(&xx, &yy);
	int state = 0;
	Show();
	do
	{
		/*do
		{
			xx = xx + round((rand() % 10 - 5) * cost / 10);
		} while (!(xx > 0 && xx < GetMaxX()));
		do
		{
			yy = yy + round((rand() % 10 - 5) * cost / 10);
		} while (!(yy > 0 && yy < GetMaxY()));*/
		int n_xx = xx + round((rand() % 10 - 5) * cost / 10);
		int n_yy = yy + round((rand() % 10 - 5) * cost / 10);
		if (n_xx > 0 && n_xx < GetMaxX() && n_yy > 0 && n_yy < GetMaxY())
		{
			xx = n_xx;
			yy = n_yy;
			Hide();
			x = xx;
			y = yy;
			ChangeColor();
			ChangeEndAngle();
			Show();
			Sleep(300);
		}
	} while (!listenKeyPress(VK_RETURN));
}
bool listenKeyPress(short p_key)
{
	return (GetAsyncKeyState(p_key) & MSB);
}