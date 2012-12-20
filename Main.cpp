#include <iostream>
#include "Deck.h"
#include "Card.h"

using namespace std;

int main(int argc, char **argv){
	const Suit s = diamonds;
	const Value v = one;
	Deck *deck = new Deck();
	//Card *card = new Card(s,v);
	
	cout << (*deck).printDeck();
	//cout << (*card).printCard();
	
	delete deck;
	//delete card;
	
	return 0;
	
}
