#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Deck.h"
#include "Player.h"
#include "House.h"

class BlackJack
{
public:
	//Default Constructor
	BlackJack(const vector<string> names);

	void play();

private:
	Deck dek;
	House dealer;
	vector<Player> gamblers;
};

#endif