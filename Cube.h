#ifndef __CUBE_H__
#define __CUBE_H__

#include <SFML/Graphics.hpp>

class Cube{

	public:
		Cube();
	private:
		int index = 0;
		sf::Texture m_texture;
		sf::Sprite m_sprite;

};

#endif
