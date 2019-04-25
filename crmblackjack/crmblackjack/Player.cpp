#include "stdafx.h"
#include "Player.h"


Player::Player()
{
	intPlayerNumber = 0;
	setPlayerNumber();
}


Player::~Player()
{
}


void Player::setPlayerNumber()
{
	static int intsPlayerTotal = 0;
	intsPlayerTotal++;
	intPlayerNumber = intsPlayerTotal;
	setPlayerName("Player " + std::to_string(intPlayerNumber));
}


std::string Player::inputPlayerName()
{
	std::string strTempName = "";
	do {
		std::cout << "Please enter " << this->getPlayerName() << " new name:";
		std::cin >> strTempName;
	} while (strTempName.size() < 4);
	this->setPlayerName(strTempName);
	return this->getPlayerName();
}


void Player::setPlayerName(std::string strpName)
{
	this->strName = strpName;
}


int Player::getHandPointValue()
{
	int intPointValue = 0;
	int intCardValue = 0;
	bool hasAce = false;
	for (int intIndex = 0; intIndex < vtrPlayerHand.size(); intIndex++) {
		intCardValue = vtrPlayerHand.at(intIndex).getFaceValue();
		if (1 == intCardValue) {
			hasAce = true;
		}
		intPointValue += intCardValue;
	}
	//See if you have an ace and it could be equal to 11.
	if (hasAce && ((intPointValue + 10) <= 21)) {
		intPointValue += 10; //Add the 10 point difference since you already have the 1 added.
	}
	return intPointValue;
}


void Player::printHand()
{
	std::cout << this->getHandString() << std::endl;
}


std::string Player::toString()
{
	std::string strPlayer = "\nPlayer: " + getPlayerName();
	strPlayer += "\nHand Value: " + std::to_string(getHandPointValue());
	strPlayer += "\nHand: " + getHandString();
	return strPlayer;
}


std::string Player::getHandString()
{
	std::string strHand = "";
	for (int intIndex = 0; intIndex < vtrPlayerHand.size(); intIndex++) {
		strHand += vtrPlayerHand.at(intIndex).toString() + ", ";
	}
	return strHand;
}


std::string Player::getPlayerName()
{
	return this->strName;
}


bool Player::addCard(Card objpCard)
{
	if (vtrPlayerHand.size() < 5) {
		vtrPlayerHand.push_back(objpCard);
		return true;
	}
	return false;
}


int Player::getNumberCards()
{
	return this->vtrPlayerHand.size();
}


void Player::init()
{

}
