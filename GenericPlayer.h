#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H

#include "Hand.h"

class GenericPlayer : public Hand
{
public:
	GenericPlayer(const string s = "");

	//The following pure virtual function declaration make this class abstract
	virtual bool playerHitting() = 0;

	bool isBusted();

	void bust();

	friend ostream & operator << (ostream & out, const GenericPlayer & gp);

protected:
	string playerName;
};





#endif 