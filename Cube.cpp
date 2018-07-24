#include "Cube.h"

Cube::Cube(unsigned int id)
{
    ID = id;
    m_textureJewel.loadFromFile("Images/jewel.png");
    m_Jewel.setTexture(m_textureJewel);
    m_Jewel.setTextureRect(sf::IntRect(32*id, 0, 32, 32));
    m_Jewel.setOrigin(0,32);
}
Cube::Cube(unsigned int id, sf::Vector2f position){
    ID = id;
    m_textureJewel.loadFromFile("Images/jewel.png");
    m_Jewel.setTexture(m_textureJewel);
    m_Jewel.setTextureRect(sf::IntRect(32*id, 0, 32, 32));
    m_Jewel.setOrigin(0,32);
    m_Jewel.setPosition(position);

}
void Cube::draw(sf::RenderWindow &window){
    window.draw(m_Jewel);
}
void Cube::changeid(unsigned int id){
    ID = id;
    m_Jewel.setTextureRect(sf::IntRect(32*id, 0, 32, 32));
}
int Cube::getID(){
    return ID;
}
