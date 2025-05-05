#include "Stock.h"
#include <cmath>

Stock::Stock(string symbol, string name){
	this -> symbol = symbol;
	this -> name = name;
	previousClosingPrice = 0;
	currentPrice = 0;
}

string Stock::getSymbol() const{
	return symbol;
}

string Stock::getName() const{
	return name;
}

double Stock::getPreviousClosingPrice() const{
	return previousClosingPrice;
}

double Stock::getCurrentPrice() const{
	return currentPrice;
}

double Stock::getChangePercent() const{
	return (currentPrice - previousClosingPrice)/
		previousClosingPrice * 100.0;
}

void Stock::setPreviousClosingPrice(const double& previousClosingPrice){
	this -> previousClosingPrice = previousClosingPrice;
}

void Stock::setCurrentPrice(const double& currentPrice){
	this -> currentPrice = currentPrice;
}
