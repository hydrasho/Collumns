#ifndef SELECTORHASARD_H
#define SELECTORHASARD_H
#include "Cube.h"

class SelectorHasard
{
    public:
        SelectorHasard();
        void draw(sf::RenderWindow &window);
        void changehasard();
        Cube first;
        Cube second;
        Cube three;

    private:

};

#endif // SELECTORHASARD_H
