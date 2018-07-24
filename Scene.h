#ifndef SCENE_H
#define SCENE_H
#include <iostream>
#include "time.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "Cube.h"
#include "Selector.h"
#include "SelectorHasard.h"

class Scene
{
    public:
        Scene();
        void draw(sf::RenderWindow &window);
        int onStart();
        void gravity();
        void right();
        void left();

    private:
        bool pressStart = false;
        int anime = 0;
        bool animeT;
        int gravityClock;
        sf::Vector2f RND3 = sf::Vector2f(64*6, 64+32);
        sf::Vector2f RND2 = sf::Vector2f(64*6, 64+64);
        sf::Vector2f RND1 = sf::Vector2f(64*6, 64+96);

        sf::Vector2f RND6 = sf::Vector2f(64*4, 0);
        sf::Vector2f RND5 = sf::Vector2f(64*4, 0+32);
        sf::Vector2f RND4 = sf::Vector2f(64*4, 0+64);

        sf::Texture m_TextureBackground;
        sf::Sprite m_SpriteBackground;

        sf::Sprite m_SpriteStart;
        sf::Texture m_TextureStart;

        sf::Sprite m_SpriteCache;
        sf::Texture m_TextureCache;

        sf::Sprite m_SpriteGrille;
        sf::Texture m_TextureGrille;

        sf::Sprite m_SpriteAfter;
        sf::Texture m_TextureAfter;

        int nbrCube;
        Cube *tableauCube[];
        Selector select;
        SelectorHasard selectorhasard;
};

#endif // SCENE_H
