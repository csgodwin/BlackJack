#ifndef PLAYER_H
#define PLAYER_H

#include "GenericPlayer.h"

class Player : public GenericPlayer
{
public:
	Player(const string s = "");

	virtual bool playerHitting();

	void win();
	void lose();
	void push();
};

#endif