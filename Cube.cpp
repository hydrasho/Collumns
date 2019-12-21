#include "Cube.h"

Cube::Cube()
{
	m_texture.loadFromFile("Images/jewel.png");
	m_sprite.setTexture(m_texture);
	m_sprite.setTextureRect(sf::IntRect(0, 0, 32, 32));
}
Cube::Cube(int index)
{
	m_texture.loadFromFile("Images/jewel.png");
	m_sprite.setTexture(m_texture);
	//m_sprite.setTextureRect(sf::IntRect(0, index * 32, 32, 32));
}
void Cube::draw(sf::RenderWindow *window)
{
	window->draw(m_sprite);
}
void Cube::changeID(int id)
{
	m_index = id;
	m_sprite.setTextureRect(sf::IntRect(id * 32, 0, 32, 32));
}
void Cube::changeID()
{
	m_index = rand() % (5 - 0 + 1);
	m_sprite.setTextureRect(sf::IntRect(m_index * 32, 0, 32, 32));
}
