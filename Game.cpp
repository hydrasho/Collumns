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
	window->draw(m_scache);


}
void Game::drawIntro(sf::RenderWindow *window){
	window->draw(m_sgrille);
	window->draw(m_safter);
	window->draw(m_scache);
	window->draw(m_sintro);
}
