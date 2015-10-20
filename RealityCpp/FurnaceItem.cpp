#include "FurnaceItem.h"
#include <string>
#include <SFML/Graphics.hpp>




string intn;
string dispn;
sf::Sprite sp;

FurnaceItem::FurnaceItem(string displayName, string internalName, sf::Sprite sprite)
{
	intn = internalName;
	dispn = displayName;
	sp = sprite;
}

string FurnaceItem::getInternal() {
	return intn;
}

string FurnaceItem::getDisplay() {
	return dispn;
}


sf::Sprite FurnaceItem::getSprite() {
	return sp;
}