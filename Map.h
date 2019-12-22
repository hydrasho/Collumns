#ifndef __MAP_H__
#define __MAP_H__

#include <SFML/Graphics.hpp>
#include <stdio.h>
#include "Cube.h"
#include "Selector.h"
#include "ThreeCube.h"


class Map{

	public:
		Map();
		void draw(sf::RenderWindow *window)
		{
			for(unsigned int i = 0;i < nbrCube;  i++)
			{
				tabCube[i]->draw(window);
			}
		}

		void addBlock(sf::Vector2f pos, int id)
		{
			tabCube[nbrCube] = new Cube(sf::Vector2f(pos.x, pos.y), id);
			printf("block n %d, positionX %f et positionY %f\n", id, pos.x, pos.y);
			nbrCube++;



		}
	private:
		Cube *tabCube[1000];
		unsigned int nbrCube;
};


#endif
