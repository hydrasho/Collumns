#include "Game.h"

Game::Game(){

	m_tgrille.loadFromFile("Images/grille.png");
	m_tafter.loadFromFile("Images/after.png");
	m_tcache.loadFromFile("Images/cache.png");
	m_tintro.loadFromFile("Images/startplay.png");

	m_sgrille.setTexture(m_tgrille);
	m_safter.setTexture(m_tafter);
	m_scache.setTexture(m_tcache);
	m_sintro.setTexture(m_tintro);

	m_sgrille.setPosition(160, 96);
	m_safter.setPosition(384, 96);
	
}
void Game::draw(sf::RenderWindow *window){
	window->draw(m_sgrille);
	window->draw(m_safter);
	m_threecube.draw(window);
	m_selector.draw(window);
	window->draw(m_scache);

	if(m_threecube.isTouch() == true)
	{
		m_threecube.setID(&m_selector);
		m_selector.shuffle();
		m_threecube.repoint();
		m_threecube.setTouch(false);
	}

}
void Game::drawIntro(sf::RenderWindow *window){
	window->draw(m_sgrille);
	window->draw(m_safter);
	window->draw(m_scache);
	window->draw(m_sintro);
	m_selector.draw(window);
}
void Game::left()
{
	m_threecube.left();
}
void Game::right()
{
	m_threecube.right();
}
void Game::down()
{
	m_threecube.tombe();
}
