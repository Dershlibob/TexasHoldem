#include <iostream>
#include <algorithm>
#include <iterator>
#include <random>
#include <math.h>
#include <complex>

#include "cards.h"
#include "Player.h"
#include "Rules.h"

#define LOGCARD(Suit, Num) std::cout << "Suit = " << Suit << " Card number = " << Num << std::endl
#define LOG(X) std::cout << X << std::endl

static CardPack Pack;
std::random_device rd;
std::mt19937 g(rd());

void Shuffle()
{
	std::shuffle(Pack.Cards.begin(), Pack.Cards.end(), g);
}

int main()
{
	Rules rules;

	float imaginary = sqrt(-1);
	LOG(imaginary);
	Player P1;
	do
	{
		Shuffle();
		for (int i = 0; i < 7; ++i)
		{
			P1.VisibleCards[i] = Pack.Cards[i];
		}
	}
	while (!rules.IsFlush(P1.VisibleCards));

	for (card Card : P1.VisibleCards)
	{
		LOGCARD(Card.suit, Card.cardNum);
	}
	
	std::cin.get();
}