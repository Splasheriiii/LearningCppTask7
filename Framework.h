#pragma once
#include "graphics.h"
#pragma comment(lib,"graphics.lib")
/// <summary>
/// ������ ��� ����������� graphics.h. ����� �� ��� ������ �� ������� ��������������� � ����������� �����������.
/// </summary>
class Framework
{
public:
	/// <summary>
	/// ������� ���� ��������� _x �� _y � �������� _o
	/// </summary>
	/// <param name="_x">������</param>
	/// <param name="_y">������</param>
	/// <param name="_o">������</param>
	Framework(int _x, int _y, int _o) : x(_x), y(_y), offset(_o)
	{
		int gdriver = DETECT, gmode;
		initwindow(700, 700);
	}
	/// <summary>
	/// ���������� - ������ �� ������������� ��������
	/// </summary>
	~Framework()
	{
		closegraph();
	}
	/// <summary>
	/// ���������� ���� �� ��������� ����������� ���������� ����� � �������, � ���������� ��������, �������� �� 0 �������� �� endAngle
	/// </summary>
	/// <param name="x">���������� �</param>
	/// <param name="y">���������� �</param>
	/// <param name="color">���� �����</param>
	/// <param name="radius">������ �����</param>
	/// <param name="endAngle">���� �� �������� ���� ����� �������� - ���������� ������</param>
	void draw_circle(int x, int y, int color, int radius, int endAngle)
	{
		setcolor(color);
		setfillstyle(1, color);
		pieslice(x + offset, y + offset, 0, endAngle, radius);
	}
	/// <summary>
	/// ���������� ������ - ���� � �����. ������ ����������� ����� - �������� ������� �������� � ��������� width. ����� ��� ����������� ���������� �������.
	/// </summary>
	void draw_ring(int x, int y, int color, int radius, int width, int endAngle, int innerAngle)
	{
		draw_circle(x,y,color, radius, endAngle);
		setfillstyle(10, getbkcolor());
		pieslice(x + offset, y + offset, 90, innerAngle, radius - width);
	}
	/// <summary>
	/// ���������� ���� ����������???
	/// </summary>
	/// <param name="color"></param>
	void set_bk(int color)
	{
		setbkcolor(color);
	}
	/// <summary>
	/// �������� ���� ����������
	/// </summary>
	/// <returns></returns>
	int get_bk()
	{
		return getbkcolor();
	}
	/// <summary>
	/// �������� ������������ ���������� � � ������ �������
	/// </summary>
	/// <returns></returns>
	int get_x()
	{
		return x - offset;
	}
	/// <summary>
	/// �������� ������������ ���������� � � ������ �������
	/// </summary>
	/// <returns></returns>
	int get_y()
	{
		return y - offset;
	}
private:
	int x, y, offset;
};

