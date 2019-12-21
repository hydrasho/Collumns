#include "Selector.h"

Selector::Selector(){

	one.changeID();
	two.changeID();
	three.changeID();

	one.getSprite().setPosition(384, 96);
	two.getSprite().setPosition(384, 128);
	three.getSprite().setPosition(384,160);
}

void Selector::draw(sf::RenderWindow *window){
	window->draw(one.getSprite());
	window->draw(two.getSprite());
	window->draw(three.getSprite());

}
void Selector::shuffle(){
	one.changeID();
	two.changeID();
	three.changeID();
	std::cout<< "CHANGEMNT";
}
