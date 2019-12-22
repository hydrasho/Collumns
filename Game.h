#ifndef __GAME_H__
#define __GAME_H__

#include <SFML/Graphics.hpp>
#include "Cube.h"
#include "ThreeCube.h"
#include "Selector.h"
#include "Map.h"


class Game{

	public:
		Game();
		void draw(sf::RenderWindow *window);
		void drawIntro(sf::RenderWindow *window);
		void left();
		void right();
		void down();
		void constructGame()
		{
			m_threecube.setID(&m_selector);
		}
	private:
		sf::Texture m_tgrille;
		sf::Texture m_tafter;
		sf::Texture m_tcache;
		sf::Texture m_tintro;
		sf::Sprite m_sgrille;
		sf::Sprite m_safter;
		sf::Sprite m_scache;
		sf::Sprite m_sintro;

		ThreeCube m_threecube;
		Selector m_selector;
		Map m_map;
};

#endif
