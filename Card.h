#ifndef CARD_H
#define CARD_H

#include <string>

using namespace std;

class Card
{
public:
	//constructor
	Card(int s = 0, int f = 0, bool h = false);

	//return the face value of the card
	int getValue() const;

	bool isHidden() const;

	//reverse the hidden status
	void flip();

	string toString() const;



private:
	int suit;
	int face;
	bool hidden;
	static const string suitNames[5];
	static const string faceNames[14];
};

#endif