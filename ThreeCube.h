#ifndef __THREECUBE_H__
#define __THREECUBE_H__

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cube.h"
#include "Selector.h"

class ThreeCube{

	public:
		ThreeCube();
		void getID(int *a, int *b, int *c)
		{
			*a = one.getID();
			*b = two.getID();
			*c = three.getID();
		}
		void setID(Selector *select){
			int a,b,c;
			select->getID(&a,&b,&c);
			one.changeID(a);
			two.changeID(b);
			three.changeID(c);
			select->shuffle();

		}
		void left();
		void right();
		void repoint();
		void tombe();
		void draw(sf::RenderWindow *window);
	private:
		sf::Clock agravity;
		unsigned int gravity = 1;
		Cube one;
		Cube two;
		Cube three;

};


#endif
