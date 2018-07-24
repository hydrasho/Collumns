#ifndef SELECTOR_H
#define SELECTOR_H
#include "Cube.h"
#include "SelectorHasard.h"

class Selector
{
    public:
        Selector();

        void right();
        void left();

        void gravity(){
            first.getSprite()->move(0,32);
            second.getSprite()->move(0,32);
            three.getSprite()->move(0,32);
        }
        bool isHorsLine();
        void draw(sf::RenderWindow &window);
        void sethasard(SelectorHasard &selectorhasard);

        Cube first;
        Cube second;
        Cube three;

    private:


};

#endif // SELECTOR_H
