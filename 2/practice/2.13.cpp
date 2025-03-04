#include <iostream>
using namespace std;

int main(){
	
	// 输入这六个月每个月存多少钱
	cout << "Enter the monthly saving amount: ";
	double monthlySavingAmount = 100;
	cin >> monthlySavingAmount;

	// 计算六个月后账户价值
	double accountValue = 0;
	accountValue = (monthlySavingAmount + accountValue) * (1 + 0.00417);
	accountValue = (monthlySavingAmount + accountValue) * (1 + 0.00417);
	accountValue = (monthlySavingAmount + accountValue) * (1 + 0.00417);
	accountValue = (monthlySavingAmount + accountValue) * (1 + 0.00417);
	accountValue = (monthlySavingAmount + accountValue) * (1 + 0.00417);
	accountValue = (monthlySavingAmount + accountValue) * (1 + 0.00417);

	// 打印结果
	cout << "After the sixth month, the accout value is $" << static_cast<int>(accountValue * 100) / 100.0 << endl;

	return 0;
}
