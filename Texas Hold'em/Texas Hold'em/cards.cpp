#include "cards.h"

CardPack::CardPack()
{
	card Card;
	Cards.reserve(52);

	for (int suit = 1; suit <= 4; ++suit)
	{
		for (int num = 1; num <= 13; ++num)
		{
			Card.suit = suit;
			Card.cardNum = num;

			Cards.push_back(Card);
		}
	}
}
