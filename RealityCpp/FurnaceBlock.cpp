#include "FurnaceBlock.h"
#include <string>
#include <SFML/Graphics.hpp>
using namespace sf;


string intn;
string dispn;
sf::Sprite spr;

FurnaceBlock::FurnaceBlock(string displayName, string internalName, sf::Sprite sprite)
{
	intn = internalName;
	dispn = displayName;
	spr = sprite;
}

string FurnaceBlock::getInternal() {
	return intn;
}

string FurnaceBlock::getDisplay() {
	return dispn;
}

sf::Sprite FurnaceBlock::getSprite() {
	return spr;
}