#include "ThreeCube.h"
ThreeCube::ThreeCube()
{
	one.changeID();
	two.changeID();
	three.changeID();
	this->repoint();
}
void ThreeCube::left()
{
	if(one.getSprite().getPosition().x >= 192)
	{
		one.getSprite().move(-32, 0);
		two.getSprite().move(-32, 0);
		three.getSprite().move(-32, 0);
	}
}
void ThreeCube::right()
{
	if(one.getSprite().getPosition().x <= 288)
	{
		one.getSprite().move(32, 0);
		two.getSprite().move(32, 0);
		three.getSprite().move(32, 0);
	}
}
void ThreeCube::melange()
{
	int tmp = one.getID();
	one.changeID(two.getID());
	two.changeID(three.getID());
	three.changeID(tmp);
}
void ThreeCube::repoint()
{
	one.getSprite().setPosition(256, 0);
	two.getSprite().setPosition(256, 32);
	three.getSprite().setPosition(256, 64);
}
bool ThreeCube::isTouch(){
	return b_touch;
}
void ThreeCube::setTouch(bool value){
	b_touch = value;
}
void ThreeCube::onTombe(){
	if(three.getSprite().getPosition().y <= 448)
	{
		one.getSprite().move(0, 32);
		two.getSprite().move(0, 32);
		three.getSprite().move(0, 32);
	}
	else
		b_touch = true;
}
void ThreeCube::draw(sf::RenderWindow *window){

	if(agravity.getElapsedTime().asMilliseconds() >= 1200)
	{
		this->onTombe();
		agravity.restart();
	}
	window->draw(one.getSprite());
	window->draw(two.getSprite());
	window->draw(three.getSprite());
}
