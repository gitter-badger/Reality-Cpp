#include "FurnaceBlock.h"
#include <string>
#include <SFML/Graphics.hpp>
using namespace std;



string intn;
string dispn;
sf::Sprite sp;

FurnaceBlock::FurnaceBlock(string displayName, string internalName, sf::Sprite sprite)
{
	intn = internalName;
	dispn = displayName;
	sp = sprite;
}

string FurnaceBlock::getInternal() {
	return intn;
}

string FurnaceBlock::getDisplay() {
	return dispn;
}

sf::Sprite FurnaceBlock::getSprite() {
	return sp;
}