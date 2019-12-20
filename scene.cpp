#include "scene.h"

Scene::Scene(sf::RenderWindow *window, Musique *music)
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
	music->playZone(0);
}
void Scene::drawer(sf::RenderWindow *window)
{
	if(activity == MENU)
	{
		window->draw(m_sbackground);
		animation();
		if(a_textBool)
		{
			window->draw(m_stext);
		}
		window->draw(m_stitre);
		window->draw(m_sange);
	}
}

void Scene::animation()
{
	if(a_textClock.getElapsedTime().asMilliseconds() >= 500)
	{
		a_textClock.restart();
		if(a_textBool == true)
			a_textBool = false;
		else
			a_textBool = true;
	}
}
void Scene::onEvent(int keyboard)
{
	std::cout << keyboard << std::endl;
	if(activity == MENU)
	{
		if(keyboard == sf::Keyboard::Return)
		{
			activity = PAUSE;
		}
	}
}
