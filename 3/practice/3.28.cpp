#include <iostream>
using namespace std;

// 货币转换

int main(){
	// 输入美元到人民币的汇率
	cout << "Enter the exchange rate from dollars to RMB: ";
	double exchangeRate;
	cin >> exchangeRate;
	// 选择(0 美元转人民币 1 人民币转美元)
	cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
	bool status;
	cin >> status;

	if (status){	// 人民币转美元
		// 输入人民币金额
		cout << "Enter the RMB amount: ";
		double amount;
		cin >> amount;
		cout << amount << " yuan is $" << amount / exchangeRate << endl;
	}
	else {		// 美元转人民币
		// 输入美元金额
		cout << "Enter the dollar amont: ";
		double amount;
		cin >> amount;
		cout << "$" << amount << "is " << amount * exchangeRate << " yuan" << endl;
	}
	return 0;
}
