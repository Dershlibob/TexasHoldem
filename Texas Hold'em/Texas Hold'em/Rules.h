#pragma once
#include "Player.h"

class Rules
{
	enum rules
	{
		HIGH_CARD,
		PAIR,
		TWO_PAIRS,
		THREE_OF_KIND,
		STRAIGHT,
		FLUSH,
		FULL_HOUSE,
		FOUR_OF_A_KIND,
		STRAIGHT_FLUSH,
		ROYAL_FLUSH
	};

public:
	int EvaluateHand(std::vector<card> PlayerHand);

	bool IsFlush(std::vector<card> PlayerHand);
	int NumOfSameNum(std::vector<card> PlayerHand);
};