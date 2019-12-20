#ifndef __GAME_H__
#define __GAME_H__

#include <SFML/Graphics.hpp>

class Game{

	public:
		Game();
		void draw(sf::RenderWindow *window);
		void drawIntro(sf::RenderWindow *window);
	private:
		sf::Texture m_tgrille;
		sf::Texture m_tafter;
		sf::Texture m_tcache;
		sf::Texture m_tintro;
		sf::Sprite m_sgrille;
		sf::Sprite m_safter;
		sf::Sprite m_scache;
		sf::Sprite m_sintro;

};

#endif
