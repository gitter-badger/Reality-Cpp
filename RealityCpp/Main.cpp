#include <SFML/Graphics.hpp>
#include "FurnaceItem.h"
#include "FurnaceBlock.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(1024, 768), "Reality (C++ rewrite by Kitten!)", sf::Style::Default);
	sf::RectangleShape shape(sf::Vector2f(16, 16));

	sf::Texture grasst;
	if (!grasst.loadFromFile("grass.png"))
	{
		return 0;
	}
	sf::Texture dirtt;
	if (!dirtt.loadFromFile("dirt.png"))
	{
		return 0;
	}

	sf::Texture stonet;
	if (!stonet.loadFromFile("stone.png"))
	{
		return 0;
	}

	FurnaceBlock grass = FurnaceBlock("Grass Block", "grass", grasst);
	FurnaceBlock dirt = FurnaceBlock("Dirt Block", "dirt", dirtt);
	FurnaceBlock stone = FurnaceBlock("Stone", "stone", stonet);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		shape.setTexture(&grasst);
		window.draw(shape);
		window.display();
	}

	return 0;
}