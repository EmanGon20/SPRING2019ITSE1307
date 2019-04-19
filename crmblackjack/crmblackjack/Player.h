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
	void setPlayerNumber();
public:
	std::string inputPlayerName();
	void setPlayerName();
	int getHandPointValue();
	void printHand();
	int toString();
	int getHandString();
	std::string getPlayerName();
	bool addCard();
	int getNumberCards();
	void init();
	std::vector<Card> vtrPlayerHand;
};

