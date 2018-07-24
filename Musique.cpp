#include "Musique.h"


Musique::Musique()
{
    int nombre = 0;
    char buff[3];
    itoa(nombre, buff, 10);
    std::string tar = buff;
    m_music.openFromFile("Music/" + tar + ".wav");
    m_music.play();
    m_music.setPlayingOffset(sf::seconds(0.1));
}
void Musique::play(unsigned int nombre){
    if(m_music.getDuration() != m_music.getPlayingOffset()){
        //std::cout << m_music.getDuration().asSeconds()<< " et " << m_music.getPlayingOffset().asSeconds() << std::endl;
    }
    if(m_music.getPlayingOffset().asSeconds() == 0.0){
        //std::cout << "replay" << std::endl;
        m_music.play();
        m_music.setPlayingOffset(sf::seconds(0.1));
    }

}
void Musique::changeId(unsigned int id){
    ID = id;
    char buff[3];
    itoa(ID, buff, 10);
    std::string tar = buff;
    m_music.openFromFile("Music/" + tar + ".wav");
    m_music.play();
    m_music.setPlayingOffset(sf::seconds(0.1));
}
void Musique::stop(){
    m_music.openFromFile("Music/s.wav");
    m_music.play();
}
