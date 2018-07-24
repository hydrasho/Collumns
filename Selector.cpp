#include "Selector.h"

Selector::Selector()
{
}
void Selector::draw(sf::RenderWindow &window){
    first.draw(window);
    second.draw(window);
    three.draw(window);
}
bool Selector::isHorsLine(){
    if(first.getSprite()->getPosition().y <= 416){
        return true;
    }
    if(second.getSprite()->getPosition().y <= 416){
        return true;
    }
    if(three.getSprite()->getPosition().y <= 416){
        return true;
    }
    return false;
}
void Selector::sethasard(SelectorHasard &selectorhasard){
    Selector::first.getSprite()->setPosition(256,0+96);
    Selector::second.getSprite()->setPosition(256,+64);
    Selector::three.getSprite()->setPosition(256,0+32);


    Selector::first.changeid(selectorhasard.first.getID());
    Selector::second.changeid(selectorhasard.second.getID());
    Selector::three.changeid(selectorhasard.three.getID());
    selectorhasard.changehasard();
}

void Selector::left(){
    first.getSprite()->move(-32,0);
    second.getSprite()->move(-32,0);
    three.getSprite()->move(-32,0);
}
void Selector::right(){
    first.getSprite()->move(32,0);
    second.getSprite()->move(32,0);
    three.getSprite()->move(32,0);
}
