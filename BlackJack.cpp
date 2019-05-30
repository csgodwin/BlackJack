#include "BlackJack.h"
#include <iostream>
#include <ctime> //for time(0)


BlackJack::BlackJack(const vector<string> names)
{
	//seed random number generator
	srand(time(0));

	//Initialize  the gamblers
	for (int i = 0; i < names.size(); i++)
		gamblers.push_back(Player(names[i]));

	//populate and shuffle the deck
	this->dek.populate();
	this->dek.shuffle();

}

void BlackJack::play()
{
	
	
	//Get deck and deal hands to players
	for (int i = 0; i < gamblers.size(); i++)
	{
		dek.deal(gamblers[i]);
		dek.deal(gamblers[i]);
	}

	//Deal cards to dealer and flip first card
	dek.deal(dealer);
	dek.deal(dealer);
	dealer.flipFirstCard();


	//Print player Names and their cards, using overloaded operator <<
	for (int i = 0; i < gamblers.size(); i++)
		cout << gamblers[i] << endl;

	//Print out dealers cards
	cout << dealer << endl;

	//Ask if each player wants a hit
	for (int i=0; i < gamblers.size(); i++)
	{
		//Keep asking until "no"
		/*while(Player::playerHitting() == true)
		{
			//Print hand if yes
			cout << player << ": " << Hand::Hand() << endl;

			//If causes to bust print "name busted"
			if (GenericPlayer::isBusted() == true)
				cout << player << ": " << GenericPlayer::bust() << endl;

		}*/
		dek.moreCards(gamblers[i]);
		cout << "\n" << endl;
	}

	dek.moreCards(dealer);

	for (int i=0; i< gamblers.size(); i++)
	{
		/*//Print each player (who has not busted) with hand, then the players points, then if they win or not
		cout << playerName << ":\t" << Card::toString() << endl;
		cout << playerName << " has " << Hand::getPoints() << " points." << endl;

		//Check if player is busted
		if (GenericPlayer::isBusted())
		{
			//Check to see if player points are more than dealer
			if (playerName::getPoints() < getPoints())
				Player::win();
			else
				Player::lose();
		}*/

		if (dealer.isBusted())
		{
			for (int i = 0; i < gamblers.size(); i++)
			{
				if (gamblers[i].isBusted() == false)
					gamblers[i].win();
			}
		}
		else
		{
			for (int i = 0; i < gamblers.size(); i++)
			{
				if (gamblers[i].isBusted() == false && gamblers[i].getPoints() > dealer.getPoints())
					gamblers[i].win();
				else if (gamblers[i].isBusted() == false && gamblers[i].getPoints() == dealer.getPoints())
					gamblers[i].push();
				else if (gamblers[i].isBusted() == false && gamblers[i].getPoints() < dealer.getPoints())
					gamblers[i].lose();

			}

		}

	}
}