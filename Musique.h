#ifndef MUSIQUE_H
#define MUSIQUE_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Musique
{
    public:
        Musique();
        void play(unsigned int nombre);
        void changeId(unsigned int id);
        void stop();


    private:
        sf::Music m_music;
        unsigned int ID;

};

#endif // MUSIQUE_H
