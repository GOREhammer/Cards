#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
#include <string>

using namespace std;

class Deck{
	vector<Card*> cards;
public:
	Deck();
	~Deck();

	void shuffle(void);
	string printDeck(void);
	
	
};

#endif
