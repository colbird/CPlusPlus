#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 计算公式
// futureInvestmentValue =
//   investmentAmount * pow(1 + monthlyInterestRate, numberOfYears * 12)

void futureInvestmentValue(
        double investmentAmount, double monthlyInterestRate, int years);

int main(){
    const int YEARS = 30;
	// 输入投资投资数额、年利率
	cout << "Enter investment amount: ";
	double investmentAmount;
	cin >> investmentAmount;

	cout << "Enter annual interest rate in percentage: ";
	double annualInterestRate;
	cin >> annualInterestRate;

	// 计算月利率
	double monthlyInterestRate = annualInterestRate / 1200;

	// 打印结果未来三十年
    futureInvestmentValue(investmentAmount, monthlyInterestRate, YEARS);

	return 0;
}
void futureInvestmentValue(
double investmentAmount, double monthlyInterestRate, int years){
    // Tital
    cout << "\nYears   Future Value" << endl;
    for (int i = 1; i <= years; i++){
        cout << setw(8) << left << i;
        cout << setprecision(2) << showpoint << fixed
        << investmentAmount * pow(1 + (monthlyInterestRate), i * 12);
        cout << endl;
    }
}
