#include <SFML/Graphics.hpp>
#include "scene.h"
#include "Musique.h"

#define XWIDTH 512
#define XHEIGHT 544

int main()
{
	Musique music;
	sf::RenderWindow window(sf::VideoMode(XWIDTH, XHEIGHT), "Collumns");
	Scene scene(&window, &music);

	window.setFramerateLimit(60);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::KeyPressed)
			{
				scene.onEvent(event.key.code);
			}
		}
		sf::Sprite m_sprite;
		window.clear();
		scene.drawer(&window);
		window.display();
	}

	return 0;
}
