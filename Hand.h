#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include <vector>

class Hand
{
public:
	//default constructor
	Hand();

	//add card c to the hand
	void add(Card & c);

	void clear();

	//compute the total points in the hand
	int getPoints() const;

protected:
	vector< Card > cards;
};

#endif