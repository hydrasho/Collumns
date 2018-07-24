#include "Scene.h"

Scene::Scene()
{
    m_TextureBackground.loadFromFile("Images/mosaique.png");
    m_TextureGrille.loadFromFile("Images/grille.png");
    m_TextureAfter.loadFromFile("Images/after.png");
    m_TextureCache.loadFromFile("Images/cache.png");
    m_TextureStart.loadFromFile("Images/startplay.png");

    m_SpriteCache.setTexture(m_TextureCache);



    m_SpriteBackground.setTexture(m_TextureBackground);
    m_SpriteGrille.setTexture(m_TextureGrille);
    m_SpriteGrille.setPosition(160, 96);

    m_SpriteAfter.setTexture(m_TextureAfter);
    m_SpriteAfter.setPosition(384,96);

    m_SpriteStart.setTexture(m_TextureStart);
    select.sethasard(selectorhasard);

    nbrCube = 0;
}
void Scene::draw(sf::RenderWindow &window){

    window.draw(m_SpriteBackground);
    window.draw(m_SpriteGrille);
    window.draw(m_SpriteAfter);
    selectorhasard.draw(window);
    select.draw(window);
    for(int i = 0; i <nbrCube; i++){
        tableauCube[i]->draw(window);
    }
    window.draw(m_SpriteCache);
    if(pressStart == false){
        if((int)clock() > anime + 800){
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
}
int Scene::onStart(){
    if (pressStart == false){
        pressStart = true;
        return 2;
    }
    std::cout << "PAUSE" << std::endl;
}
void Scene::gravity(){
    if (pressStart == true)
    {
        if((int)clock() > gravityClock + 1000)
        {
            if(select.isHorsLine()){
                select.gravity();
            }
            else{
                tableauCube[nbrCube] = new Cube(select.first.getID(), sf::Vector2f(select.first.getSprite()->getPosition().x,select.first.getSprite()->getPosition().y));
                nbrCube ++;
                tableauCube[nbrCube] = new Cube(select.second.getID(), sf::Vector2f(select.second.getSprite()->getPosition().x,select.second.getSprite()->getPosition().y));
                nbrCube ++;
                tableauCube[nbrCube] = new Cube(select.three.getID(), sf::Vector2f(select.three.getSprite()->getPosition().x,select.three.getSprite()->getPosition().y));
                nbrCube ++;

                select.sethasard(selectorhasard);
            }
            gravityClock = (int)clock();
        }
    }
}
void Scene::left(){
    select.left();
}
void Scene::right(){
    select.right();
}
