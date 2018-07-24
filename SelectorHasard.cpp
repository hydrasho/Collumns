#include "SelectorHasard.h"

SelectorHasard::SelectorHasard()
{
    srand(time(NULL));

    first.getSprite()->setPosition(64*6, 64*3);
    second.getSprite()->setPosition(64*6, 64*2+32);
    three.getSprite()->setPosition(64*6, 64*2);

    int randA = (rand() % (5 - 0 + 1)) + 0;
    int randB = (rand() % (5 - 0 + 1)) + 0;
    int randC = (rand() % (5 - 0 + 1)) + 0;
    first.changeid(randA);
    second.changeid(randB);
    three.changeid(randC);

}
void SelectorHasard::draw(sf::RenderWindow &window){
    first.draw(window);
    second.draw(window);
    three.draw(window);
}
void SelectorHasard::changehasard(){

    int randA = (rand() % (5 - 0 + 1)) + 0;
    int randB = (rand() % (5 - 0 + 1)) + 0;
    int randC = (rand() % (5 - 0 + 1)) + 0;
    first.changeid(randA);
    second.changeid(randB);
    three.changeid(randC);
}
