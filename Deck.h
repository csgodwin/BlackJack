#ifndef DECK_H
#define DECK_H

#include "Hand.h"
#include "GenericPlayer.h"

class Deck : public Hand
{
public:
	//constructor
	Deck();

	//create a standard deck of 52 cards
	void populate();

	//simulate shuffling the cards in the deck
	void shuffle();

	//deals a card to a hand object passed as reference
	void deal(Hand & hand);

	//deal more cards to generic player (maybe polymorphic)
	void moreCards(GenericPlayer & gp);

};





#endif