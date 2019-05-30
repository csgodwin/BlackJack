#include "House.h"
#include <string>

// Constructor
House::House(const string s)
	:GenericPlayer(s)
{}

bool House::playerHitting()
{
	int pts = Hand::getPoints();

	return pts <= 16 || pts > 16;

}

void House::flipFirstCard()
{
	/*vector <Card> cards = Hand::Hand();
	vector <Card> firstCard = cards[-1];

	firstCard = Card::flip*/
	this->cards[0].flip();
}