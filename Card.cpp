#include "Card.h"

const string Card::suitNames[5] = { "", "H", "D", "C", "S" };
const string Card::faceNames[14] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };

Card::Card(int s, int f, bool h)
	: suit(s), face(f), hidden(h)
{}

int Card::getValue() const
{
	if (face <= 10)
		return face;
	else
		return 10;
}

bool Card::isHidden() const
{
	return hidden == true;
}

void Card::flip()
{
	hidden = !hidden;
}

string Card::toString() const
{
	if (isHidden())
		return "??";
	else
		return faceNames[face] + suitNames[suit];
}