#include <SFML/Graphics.hpp>
#include "scene.h"

#define XWIDTH 512
#define XHEIGHT 544

enum Activity{
	MENU,
	PAUSE,
	GAME
};

int main()
{
	sf::RenderWindow window(sf::VideoMode(XWIDTH, XHEIGHT), "Collumns");
	Scene scene(&window);
	Activity activity = MENU;
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		sf::Sprite m_sprite;
		window.clear();
		if(activity == MENU)
		{
			scene.drawer(&window);
		}
		window.display();
	}

	return 0;
}
