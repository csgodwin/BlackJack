#include "GenericPlayer.h"
#include <iostream>

//constructor
GenericPlayer::GenericPlayer(const string str)
	: Hand(), playerName(str)
{}

bool GenericPlayer::isBusted()
{
	return this->getPoints() > 21;
}

void GenericPlayer::bust()
{
	cout << playerName << " busted.\n";
}

ostream & operator << (ostream & out, const GenericPlayer & gp)
{
	out << gp.playerName << ":\t";
	for (int i = 0; i < gp.cards.size(); i++)
		out << gp.cards[i].toString() << "\t";
	return out;
}