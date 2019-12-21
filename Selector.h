#ifndef __SELECTOR_H__
#define __SELECTOR_H__

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cube.h"


class Selector{

	public:
		Selector();
		void draw(sf::RenderWindow *window);
		void getID(int *a, int *b, int *c)
		{
			*a = one.getID();
			*b = two.getID();
			*c = three.getID();
		}
		void shuffle();
	private:
		Cube one;
		Cube two;
		Cube three;
		

};

#endif
