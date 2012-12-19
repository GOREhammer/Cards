#ifndef DECK_H
#define DECK_H
#include "Card.h"

class Deck{
	Card *cards;
	const Card *topCard;
public:
	Deck();
	~Deck();

	void Shuffle();
	
};

#endif
