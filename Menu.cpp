#include "Menu.h"

Menu::Menu()
{
    m_TextureBackground.loadFromFile("Images/mosaique.png");
    m_TextureTitre.loadFromFile("Images/titre.png");
    m_TextureAnge.loadFromFile("Images/ange.png");
    m_TextureStart.loadFromFile("Images/start.png");
    //m_TextureTitre.setSmooth(true);

    m_SpriteBackground.setTexture(m_TextureBackground);
    m_SpriteBackground.setColor(sf::Color(255,100,255,255));

    m_SpriteTitre.setTexture(m_TextureTitre);
    m_SpriteAnge.setTexture(m_TextureAnge);
    m_SpriteAnge.setPosition(0, m_TextureTitre.getSize().y);

    m_SpriteStart.setTexture(m_TextureStart);
    m_SpriteStart.setPosition(0,m_SpriteAnge.getPosition().y + m_TextureAnge.getSize().y);
}
void Menu::draw(sf::RenderWindow &window){

    window.draw(m_SpriteBackground);
    window.draw(m_SpriteTitre);
    window.draw(m_SpriteAnge);
    if((int)clock() > anime + 500){
        if(animeT == false){
            animeT = true;
        }
        else if(animeT == true){
           animeT = false;
        }

        anime = (int) clock();
    }
    if(animeT == true){
        window.draw(m_SpriteStart);
    }


}
