#ifndef __Musique_H__
#define __Musique_H__

#include <SFML/Audio.hpp>
#include  <iostream>

class Musique{

	public:
		Musique();
		void playZone(int zone);
	private:
		sf::Music m_music;
};




#endif
