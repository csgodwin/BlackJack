#include "BlackJack.h"
#include <iostream>

int main()
{
	cout << "Welcome to my simple blackjack game.\n";

	int numberGamblers;
	cout << "How many gamblers? ";
	cin >> numberGamblers;


	vector <string> gNames;
	string name;
	for (int i = 0; i < numberGamblers; i++)
	{
		cout << "Enter player name: ";
		cin >> name;
		gNames.push_back(name);

	}

	cout << "*********************************\n\n";

	BlackJack b(gNames);

	b.play();

	system("pause");

	return 0;
}