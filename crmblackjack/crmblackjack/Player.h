#pragma once
#include <string>
#include <vector>
#include "Card.h"

class Player
{
public:
	Player();
	~Player();
private:
	int intPlayerNumber;
	std::string strName;
	std::vector<Card> vtrPlayerHand;
	void setPlayerNumber();
public:
	std::string inputPlayerName();
	void setPlayerName(std::string strpName);
	int getHandPointValue();
	void printHand();
	std::string toString();
	std::string getHandString();
	std::string getPlayerName();
	bool addCard(Card objpCard);
	int getNumberCards();
	void init();
	
};

