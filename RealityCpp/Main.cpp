#include <SFML/Graphics.hpp>
#include "FurnaceItem.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(1024, 768), "Reality (C++ rewrite by Kitten!)", sf::Style::Default);
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}