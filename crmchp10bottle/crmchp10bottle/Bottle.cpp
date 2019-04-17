#include "pch.h"
#include "Bottle.h"
#include <iostream>
#include <string>

Bottle::Bottle()
{
	this->setHeight(6);
	this->setRadius(2);
	this->empty();
}


Bottle::~Bottle()
{
}


double Bottle::getVolume()
{
	return std::acos(-1) * pow(this->intRadius, 2) * (double)this->intHeight;
}


bool Bottle::isEmpty()
{
	return (this->intLiquidHeight == 0);
}


bool Bottle::isFull()
{
	return (this->intLiquidHeight == this->intHeight);
}


double Bottle::getLiquidVolume()
{
	return std::acos(-1) * pow(this->intRadius, 2) * (double)this->intLiquidHeight;
}


int Bottle::setRadius(int intpRadius)
{
	if (intpRadius <= 0) {
		std::cerr << "Invalid Radius for Bottle: Set to 2 as default." << std::endl;
		intpRadius = 2;
	}
	this->intRadius = intpRadius;
	return 0;
}


int Bottle::setHeight(int intpHeight)
{
	if (intpHeight <= 0) {
		std::cerr << "Invalid Height for Bottle: Set to 6 as default." << std::endl;
		intpHeight = 6;
	}
	this->intHeight = intpHeight;
	return 0;
}


void Bottle::empty()
{
	this->intLiquidHeight = 0;
}


int Bottle::addLiquid(int intpLiquidHeight)
{
	this->intLiquidHeight += intpLiquidHeight;
	if (this->intLiquidHeight > this->intHeight)
	{
		this->intLiquidHeight = this->intHeight;
	}
	return this->intLiquidHeight;
}


std::string Bottle::toString()
{
	std::string strOutput = "";
	strOutput += std::to_string(this->intRadius) + " radius, ";
	strOutput += std::to_string(this->intHeight) + " height, ";
	strOutput += std::to_string(this->intLiquidHeight) + " liquid height ";
	strOutput += std::to_string(this->getVolume()) + " volume ";
	strOutput += std::to_string(this->getLiquidVolume()) + " liquid volume";
	return strOutput;
}


std::string Bottle::toJSON()
{
	std::string strOutput = "{";
	strOutput += " radius: " + std::to_string(this->intRadius) ;
	strOutput += ", height: " + std::to_string(this->intHeight);
	strOutput += ", liquidheight: " + std::to_string(this->intLiquidHeight);
	strOutput += ", volume: " + std::to_string(this->getVolume());
	strOutput += ", liquidvolume: " + std::to_string(this->getLiquidVolume());
	strOutput += "}";
	return strOutput;
}
