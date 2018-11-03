#include "Rules.h"

int Rules::EvaluateHand(std::vector<card> PlayerHand)
{
	IsFlush(PlayerHand);

	
	return 0;
}

bool Rules::IsFlush(std::vector<card> PlayerHand)
{
	for (card Suit : PlayerHand)
	{
		int sameCards = 0;
		for (card Hand : PlayerHand)
		{
			if (Suit.suit == Hand.suit)
			{
				sameCards++;
			}
			if (sameCards == 5)
			{
				return true;
			}
		}
	}
	return false;
}

int Rules::NumOfSameNum(std::vector<card> PlayerHand)
{


	return 0;
}
