#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "time.h"

class Menu
{
    public:
        Menu();
        void draw(sf::RenderWindow &window);



    private:
        sf::Texture m_TextureBackground;
        sf::Sprite m_SpriteBackground;
        sf::Texture m_TextureTitre;
        sf::Sprite m_SpriteTitre;

        sf::Texture m_TextureAnge;
        sf::Sprite m_SpriteAnge;

        sf::Texture m_TextureStart;
        sf::Sprite m_SpriteStart;

        int anime = 0;
        bool animeT = false;

};

#endif // MENU_H
