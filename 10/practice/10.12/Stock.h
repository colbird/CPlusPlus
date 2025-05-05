#ifndef STOCK_H
#define STOCK_H
#include <string>
using namespace std;
class Stock{
	public:
		Stock(string, string);
		string getSymbol() const;
		string getName() const;
		double getPreviousClosingPrice() const;
		double getCurrentPrice() const;
		double getChangePercent() const;
		void setPreviousClosingPrice(const double&);
		void setCurrentPrice(const double&);
	private:
		string symbol;
		string name;
		double previousClosingPrice;
		double currentPrice;
};

#endif
