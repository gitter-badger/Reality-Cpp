#pragma once
class FurnaceBlock
{
public:
	FurnaceBlock(string displayName, string internalName, sf::Sprite sprite);
	string FurnaceBlock::getInternal();
	string FurnaceBlock::getDisplay();
	sf::Sprite FurnaceBlock::getSprite();
private:
	string intn;
	string dispn;
	string aph;
	sf::Sprite sp;
};

