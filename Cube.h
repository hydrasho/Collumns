#ifndef CUBE_H
#define CUBE_H
#include <SFML/Graphics.hpp>
#include <iostream>

class Cube
{
    public:
        Cube(unsigned int id = 0);
        Cube(unsigned int id, sf::Vector2f position);
        void draw(sf::RenderWindow &window);
        sf::Sprite *getSprite(){
            return &m_Jewel;
        }
        void changeid(unsigned int id);
        int getID();

    private:
        sf::Texture m_textureJewel;
        sf::Sprite m_Jewel;
        int ID;
};

#endif // CUBE_H
