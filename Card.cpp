#include "Card.h"

Card::Card(){
	/*Random values for suit and value but color being restricted by suit.*/
}

Card::Card(Type type, Color color, Value value){
	this->suit = new Suit();
	suit->type=type;
	suit->color = color;
	this->value = value;
}

Card::~Card(){
	delete this->suit;
}
