#ifndef CARD_H
#define CARD_H
#include <string>

using namespace std;

enum Suit{diamonds = 0, hearts, spades, clubs};

enum Color{black = 0, red};

enum Value{one = 0, two, three, four, five, six, seven, eight, nine, ten,
		 J, Q, K, A};

class Card{
	Suit suit;
	Value value;
	Color color;

	public:
	Card(Suit suit, Value value);
	
	string printCard(void);
		
	
};
#endif
