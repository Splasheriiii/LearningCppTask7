#include <iostream>
#include "Ring.h"

int main()
{
	Framework* framework = new Framework(700, 700, 100);
	Circle* test_circle = new Circle(framework, 150, 40, 50, 1);
	Circle* test_ring = new Ring(framework, 450, 80, 90, 50, 1);
	
	//Данный код ломает программу, хотя он есть в исходниках на паскале
	//framework->set_bk(80);

	test_circle->Fly(100);
	test_ring->Fly(60);
	test_circle->Fly(60);
	std::cin.get();
	test_ring->Hide();
	test_circle->Hide();
	std::cin.get();
	delete framework;
}