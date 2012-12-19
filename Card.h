#ifndef CARD_H
#define CARD_H

enum Type{diamonds, hearts, spades, clubs};

enum Color{black, red};

enum Value{one, two, three, four, five, six, seven, eight, nine, ten,
		 J, Q, K, A};

struct Suit{
	Type type;
	Color color;	
};

class Card{
	Suit *suit;
	Value value;

	public:
	Card();
	Card(Type type, Color color, Value value);
	~Card();
		
	
};
#endif
