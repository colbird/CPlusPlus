#include <iostream>
#include <cmath>
using namespace std;

// 计算公式
// futureInvestmentValue =
//   investmentAmount * pow(1 + monthlyInterestRate, numberOfYears * 12)

int main(){
	// 输入投资投资数额、年利率和年数
	cout << "Enter investment amount: ";
	double investmentAmount;
	cin >> investmentAmount;

	cout << "Enter annual interest rate in percentage: ";
	double annualInterestRate;
	cin >> annualInterestRate;

	cout << "Enter number of years: ";
	double numberOfYears;
	cin >> numberOfYears;

	// 计算未来投资价值
	double monthlyInterestRate = annualInterestRate / 1200;
	double futureInvestmentValue = investmentAmount * pow(1 + (monthlyInterestRate), numberOfYears * 12);

	// 打印结果
	cout << "Accumulated value is $" << futureInvestmentValue << endl;

	return 0;
}
