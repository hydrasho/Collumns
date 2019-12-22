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
	m_music = music;
	music->playZone(0);
}
void Scene::drawer(sf::RenderWindow *window)
{
	window->draw(m_sbackground);
	if(activity == MENU)
	{
		animation();
		if(a_textBool)
		{
			window->draw(m_stext);
		}
		window->draw(m_stitre);
		window->draw(m_sange);
	}
	if(activity == INTRO)
	{
			m_game.drawIntro(window);
	}
	if(activity == GAME)
	{
		m_game.draw(window);
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
	if(activity == MENU)
	{
		if(keyboard != sf::Keyboard::Return)
		{
			activity = INTRO;
			m_music->playZone(4);
		}
	}
	if(activity == INTRO)
	{
		if(keyboard == sf::Keyboard::Return)
		{
			m_music->stop();
			m_music->intro();
			activity = GAME;
			m_game.constructGame();
			m_music->playZone(2);
		}
	}
	if(activity == GAME)
	{
		if(keyboard == sf::Keyboard::Left)
		{
			m_game.left();
		}
		if(keyboard == sf::Keyboard::Right)
		{
			m_game.right();
		}
		if(keyboard == sf::Keyboard::Down)
		{
			m_game.down();
		}
		if(keyboard == sf::Keyboard::Z || keyboard == sf::Keyboard::X)
		{
			m_game.melange();
		}
	}
}
