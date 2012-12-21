#ifndef HAND_H
#define HAND_H
#include "Card.h"

class Hand{
	vector<Card*> cards;
public:
	Hand(vector<Card*> cards;);
	~Hand();

	Card* removeCards(const int *indicies);
	Card* removeCards(Card card);
	
};


#endif
