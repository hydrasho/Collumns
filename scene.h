#ifndef __SCENE_H__
#define __SCENE_H__

#include <SFML/Graphics.hpp>

class Scene
{
	public:
		Scene(sf::RenderWindow *window);
		void drawer(sf::RenderWindow *window);
	private:
		sf::Sprite m_sbackground;
		sf::Texture m_tbackground;
		sf::Sprite m_stitre;
		sf::Texture m_ttitre;
		sf::Sprite m_sange;
		sf::Texture m_tange;
		sf::Sprite m_stext;
		sf::Texture m_ttext;

};


#endif
