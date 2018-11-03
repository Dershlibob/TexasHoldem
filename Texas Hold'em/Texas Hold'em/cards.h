#pragma once
#include <vector>

struct card
{
	enum Suit
	{
		HEART = 1,
		CLUB,
		SPADE,
		DIAMOND
	};
	int suit;
	int cardNum;
};

class CardPack
{
public:
	CardPack();

	std::vector<card> Cards;

};