#include "Hand.h"
#include "Card.h"

//constructor, empty hand/empty vector
Hand::Hand()
	: cards()
{}


void Hand::add(Card & c)
{
	this->cards.push_back(c);
}

void Hand::clear()
{
	cards.clear();
}

int Hand::getPoints() const
{
	int total = 0;
	bool havingAce = false;

	//go through all the cards in the hand
	for (int i = 0; i < cards.size(); i++)
	{
		total += cards[i].getValue();
		//check if this card is ace
		if (cards[i].getValue() == 1)
			havingAce = true;
	}

	//If there is an Ace in the hand
	if (havingAce == true && total <= 11)
		total += 10;

	return total;
}
