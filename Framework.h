#pragma once
#include "graphics.h"
#pragma comment(lib,"graphics.lib")
/// <summary>
/// Обёртка над библиотекой graphics.h. Через неё все классы из паскаля взаимодействуют с графической библиотекой.
/// </summary>
class Framework
{
public:
	/// <summary>
	/// Создать окно размерами _x на _y с отступом _o
	/// </summary>
	/// <param name="_x">Ширина</param>
	/// <param name="_y">Высота</param>
	/// <param name="_o">Отступ</param>
	Framework(int _x, int _y, int _o) : x(_x), y(_y), offset(_o)
	{
		int gdriver = DETECT, gmode;
		initwindow(700, 700);
	}
	/// <summary>
	/// Деструктор - следит за освобождением ресурсов
	/// </summary>
	~Framework()
	{
		closegraph();
	}
	/// <summary>
	/// Нарисовать круг по указанным координатам указанного цвета и радиуса, с вырезанным сектором, закрасив от 0 градусов до endAngle
	/// </summary>
	/// <param name="x">Координата Х</param>
	/// <param name="y">Координата У</param>
	/// <param name="color">Цвет круга</param>
	/// <param name="radius">Радиус круга</param>
	/// <param name="endAngle">Угол до которого круг будет закрашен - вырезанный сектор</param>
	void draw_circle(int x, int y, int color, int radius, int endAngle)
	{
		setcolor(color);
		setfillstyle(1, color);
		pieslice(x + offset, y + offset, 0, endAngle, radius);
	}
	/// <summary>
	/// Нарисовать кольцо - круг в круге. Радиус внутреннего круга - разность радиуса внешнего и параметра width. Имеет два независимых вырезанных сектора.
	/// </summary>
	void draw_ring(int x, int y, int color, int radius, int width, int endAngle, int innerAngle)
	{
		draw_circle(x,y,color, radius, endAngle);
		setfillstyle(10, getbkcolor());
		pieslice(x + offset, y + offset, 90, innerAngle, radius - width);
	}
	/// <summary>
	/// Установить цвет бэкграунда???
	/// </summary>
	/// <param name="color"></param>
	void set_bk(int color)
	{
		setbkcolor(color);
	}
	/// <summary>
	/// Получить цвет бэкграунда
	/// </summary>
	/// <returns></returns>
	int get_bk()
	{
		return getbkcolor();
	}
	/// <summary>
	/// Получить максимальную координату Х с учётом отступа
	/// </summary>
	/// <returns></returns>
	int get_x()
	{
		return x - offset;
	}
	/// <summary>
	/// Получить максимальную координату У с учётом отступа
	/// </summary>
	/// <returns></returns>
	int get_y()
	{
		return y - offset;
	}
private:
	int x, y, offset;
};

