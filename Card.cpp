#include "Card.h"
#include <string>

using namespace std;

Card::Card(const Suit suit, const Value value){
	this->suit = suit;
	this->value = value;
	
	if(this-> suit == diamonds | this->suit == hearts)
		this->color = red;
	else
		this->color = black;
}

string Card::printCard(void){
	string res = "";
	
	switch(this->value){
		case one:
			res += "1";
		break;
		
		case two:
			res += "2";
		break;
		
		case three:
			res += "3";
		break;
		
		case four:
			res += "4";
		break;
		
		case five:
			res += "5";
		break;
		
		case six:
			res += "6";
		break;
		
		case seven:
			res += "7";
		break;
		
		case eight:
			res += "8";
		break;
		
		case nine:
			res += "9";
		break;
		
		case ten:
			res += "10";
		break;
		
		case J:
			res += "J";
		break;
		
		case Q:
			res += "Q";
		break;
		
		case K:
			res += "K";
		break;
		
		case A:
			res += "A";
		break;
	}
	
	res += " of ";
	
	switch(this->suit){
		case diamonds:
		res += "Diamonds";
		break;
		
		case hearts:
		res += "Hearts";
		break;
		
		case spades: 
		res += "Spades";
		break;
		
		case clubs:
		res += "Clubs";
		break;
	}
	
	res += "\n";
	
	return res;
	
}



