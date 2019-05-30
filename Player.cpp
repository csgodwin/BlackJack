#include "Player.h"
#include <iostream>


//constructor, DIY
Player::Player(const string s)
	: GenericPlayer(s)
{}

//overriding the pure virtual function
bool Player::playerHitting()
{
	char ans;

	cout << playerName << ", do you want a hit? (Y or N): ";
	cin >> ans;

	return ans == 'Y' || ans == 'y';

}

void Player::win()
{
	cout << playerName << " wins." << endl;
}

void Player::lose()
{
	cout << playerName << " loses." << endl;
}

void Player::push()
{

}