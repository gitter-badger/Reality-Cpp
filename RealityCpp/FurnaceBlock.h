#pragma once
#include <SFML/Graphics.hpp>
#include <string>
using namespace sf;
using namespace std;
class FurnaceBlock
{
public:
	FurnaceBlock::FurnaceBlock(string displayName, string internalName, sf::Sprite sprite);
	string FurnaceBlock::getInternal();
	string FurnaceBlock::getDisplay();
	sf::Sprite FurnaceBlock::getSprite();
private:
	string intn;
	string dispn;
	string aph;
	sf::Sprite spr;
};

