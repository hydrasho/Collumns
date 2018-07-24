#include <iostream>
#include <SFML/Graphics.hpp>


#include "Musique.h"
#include "Menu.h"
#include "Scene.h"


using namespace std;

sf::RenderWindow window;
sf::SoundBuffer buffer;
sf::Sound commencement;
enum State{PAUSE, PLAY, MENU};

Musique musique;
Menu menu;
Scene scene;

void menuDraw();
void playDraw();

int main()
{
    State state;
    state = MENU;

    window.create(sf::VideoMode(512,544), "Collumns");
    window.setFramerateLimit(120);

    while (window.isOpen())
    {
        musique.play(0);
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if(state == MENU){
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
                {
                    state = PLAY;
                    buffer.loadFromFile("Song/debut.wav");
                    commencement.setBuffer(buffer);
                    musique.changeId(4);
                }
            }
            if(state == PLAY){
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
                {
                    if(scene.onStart() == 2){//start du début
                        std::cout << "play du song" << std::endl;
                        musique.stop();
                        commencement.play();
                        sf::sleep(sf::seconds(1.5));
                        musique.changeId((rand() % (3 - 2 + 1)) + 2);
                    }
                    if(scene.onStart() == 5){//pause
                        musique.stop();
                    }

                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                {
                    scene.left();
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                {
                    scene.right();
                }
            }
        }

        window.clear();
        if(state == MENU){
            menuDraw();
        }
        if(state == PLAY){
            playDraw();
        }
        window.display();
    }

    return 0;
}

void menuDraw(){
    menu.draw(window);
}
void playDraw(){
    scene.gravity();
    scene.draw(window);

}
