#ifndef HAND_H
#define HAND_H
#include "Card.h"

class Hand{
	Card *cards;
public:
	Hand(Card *cards);
	~Hand();

	Card* removeCards(const int *indicies);
	Card* removeCards(Card card);
	
};


#endif
