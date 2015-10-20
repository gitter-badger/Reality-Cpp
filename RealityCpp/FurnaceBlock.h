#pragma once
#include <SFML/Graphics.hpp>
#include <string>
using namespace sf;
using namespace std;
class FurnaceBlock
{
public:
	FurnaceBlock(string displayName, string internalName, sf::Sprite sprite);
	string getInternal();
	string getDisplay();
	sf::Sprite getSprite();
private:
	string intn;
	string dispn;
	string aph;
	sf::Sprite spr;
};

