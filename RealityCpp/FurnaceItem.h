#pragma once
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;
class FurnaceItem
{
public:
	FurnaceItem(string displayName, string internalName, sf::Texture sprite);
	string getInternal();
	string getDisplay();
	sf::Texture getSprite();
private:
	string intn;
	string dispn;
	sf::Texture sp;
};

