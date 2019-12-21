#ifndef __CUBE_H__
#define __CUBE_H__

#include <SFML/Graphics.hpp>
#include <time.h>

class Cube{

	public:
		Cube();
		Cube(int index);
		void draw(sf::RenderWindow *window);
		void changeID();
		void changeID(int id);
		int getID(){
			return m_index;
		}
		sf::Sprite &getSprite()
		{
			return m_sprite;
		}
	private:
		int m_index = 0;
		sf::Texture m_texture;
		sf::Sprite m_sprite;

};

#endif
