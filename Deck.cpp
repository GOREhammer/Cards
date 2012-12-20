#include "Deck.h"
#include "Card.h"
#include <string>

using namespace std;

Deck::Deck(){
	for(int i = 0; i <= clubs; i++){
		for(int j = 0; j <= A; j++){
			this->cards.push_back(new Card((Suit)i,(Value)j));
		}
	}
}

Deck::~Deck(){
	vector<Card*>::iterator current;
	const vector<Card*>::iterator end = this->cards.end();

	for(current = this->cards.begin(); current < end; current++){
		delete *current;
	}
	
}

void shuffle(void){}

string Deck::printDeck(void){
	vector<Card*>::iterator current;
	const vector<Card*>::iterator end = this->cards.end();
	string res = "";
	
	for(current = this->cards.begin(); current < end; current++){
		res += (**current).printCard() + "\n";
	}
	
	return res;
}


