#include "Cube.h"

Cube::Cube()
{
	m_texture.loadFromFile("Images/jewel.png");
	m_sprite.setTexture(m_texture);
	m_sprite.setTextureRect(sf::IntRect(0, 0, 32, 32));
}
void Cube::draw(sf::RenderWindow *window)
{
	window->draw(m_sprite);
}
void Cube::changeID(int id)
{
	m_sprite.setTextureRect(sf::IntRect(0, id * 32, 32, 32));
}
