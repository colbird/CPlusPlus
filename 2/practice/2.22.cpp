#include <iostream>
using namespace std;

// 计算公式 interest = balance *(annualInterestRate / 1200);

int main(){
	
	// 输入余款和年利率
	cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
	double balance, annualInterestRate;
	cin >> balance >> annualInterestRate;

	// 计算利息
	double interest = balance *(annualInterestRate / 1200);

	// 打印结果
	cout << "The interest is " << interest << endl;

	return 0;
}
