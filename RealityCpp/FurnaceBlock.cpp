#include "FurnaceBlock.h"
#include <string>
#include <SFML/Graphics.hpp>
using namespace sf;


FurnaceBlock::FurnaceBlock(string displayName, string internalName, sf::Texture sprite)
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

sf::Texture FurnaceBlock::getSprite() {
	return spr;
}