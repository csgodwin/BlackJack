#ifndef HOUSE_H
#define HOUSE_H

#include "GenericPlayer.h"

class House : public GenericPlayer
{
public:
	House(const string s = "dealer");

	virtual bool playerHitting();

	void flipFirstCard();

};

#endif