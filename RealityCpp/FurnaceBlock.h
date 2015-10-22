#pragma once
#include <SFML/Graphics.hpp>
#include <string>
using namespace sf;
using namespace std;
class FurnaceBlock
{
public:
	FurnaceBlock(string displayName, string internalName, sf::Texture sprite);
	string getInternal();
	string getDisplay();
	sf::Texture getSprite();
private:
	string intn;
	string dispn;
	string aph;
	sf::Texture spr;
};

