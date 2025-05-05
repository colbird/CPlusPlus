#include <iostream>
#include "Stock.h"

int main(){
	Stock stock("MSFT", "Microsoft Corporation");
	stock.setPreviousClosingPrice(27.5);
	stock.setCurrentPrice(27.6);
	cout << stock.getPreviousClosingPrice() << endl;
	cout << stock.getCurrentPrice() << endl;
	cout << stock.getChangePercent() << endl;
	return 0;
}
