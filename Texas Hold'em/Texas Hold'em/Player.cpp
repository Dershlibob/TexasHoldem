#include "Player.h"

Player::Player()
{
	card Obj;
	VisibleCards.reserve(7);
	for (int i = 0; i < 7; ++i)
	{
		VisibleCards.push_back(Obj);
	}
}

