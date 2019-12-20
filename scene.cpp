#include "scene.h"

Scene::Scene(sf::RenderWindow *window)
{
	m_tbackground.loadFromFile("Images/mosaique.png");
	m_sbackground.setTexture(m_tbackground);
	m_tange.loadFromFile("Images/ange.png");
	m_sange.setTexture(m_tange);
	m_ttitre.loadFromFile("Images/titre.png");
	m_stitre.setTexture(m_ttitre);
	m_ttext.loadFromFile("Images/start.png");
	m_stext.setTexture(m_ttext);

	m_sange.setOrigin(sf::Vector2f(0, m_tange.getSize().y));
	m_sange.setPosition(0, window->getSize().y);

	m_stext.setPosition(0, m_ttitre.getSize().y + 32);

}
void Scene::drawer(sf::RenderWindow *window)
{
	window->draw(m_sbackground);
	window->draw(m_stitre);
	window->draw(m_stext);
	window->draw(m_sange);
}
