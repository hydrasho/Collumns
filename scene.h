#ifndef __SCENE_H__
#define __SCENE_H__

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Musique.h"
#include <iostream>

class Scene
{
	public:
		enum Activity{MENU,PAUSE,GAME};
		Scene(sf::RenderWindow *window, Musique *music);
		void drawer(sf::RenderWindow *window);
	void onEvent(int keyboard);
	protected:
		void animation();
	private:
		sf::Music *m_music = NULL;
		Activity activity = MENU;

		sf::Sprite m_sbackground;
		sf::Texture m_tbackground;
		sf::Sprite m_stitre;
		sf::Texture m_ttitre;
		sf::Sprite m_sange;
		sf::Texture m_tange;
		sf::Sprite m_stext;
		sf::Texture m_ttext;

		bool a_textBool = false;
		sf::Clock a_textClock;

};


#endif
