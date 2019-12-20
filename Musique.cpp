#include "Musique.h"

Musique::Musique(){
	m_music.setLoop(true);
}
void Musique::playZone(int zone){
	char str[2];
	str[0] = zone + 48;
	str[1] = '\0';
	std::string a = str;
	std::string superString = ("Music/" + a + ".wav");

	if (!m_music.openFromFile(superString))
		exit; // erreur
	m_music.play();
}
