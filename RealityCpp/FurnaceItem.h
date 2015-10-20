#pragma once
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;
class FurnaceItem
{
public:
	FurnaceItem(string displayName, string internalName, sf::Sprite sprite);
	string getInternal();
	string getDisplay();
	sf::Sprite getSprite();
private:
	string intn;
	string dispn;
	sf::Sprite sp;
};

