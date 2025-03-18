#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	// 输入
	cout << "Enter employee's name: ";
	string name;
	cin >> name;

	cout << "Enter number of hours worked in a week: ";
	double hoursWork;
	cin >> hoursWork;

	cout << "Enter hourly pay rate: ";
	double payRate;
	cin >> payRate;

	cout << "Enter federal tax withholding rate: ";
	double federalWithholdingRate;
	cin >> federalWithholdingRate;

	cout << "Enter state tax withholding rate: ";
	double stateWithholdingRate;
	cin >> stateWithholdingRate;

	// 计算
	double grossPay = hoursWork * payRate;
	double federalWithholding =  grossPay * federalWithholdingRate;
	double stateWithholding = grossPay * stateWithholdingRate;
	double totalWithholding = federalWithholding + stateWithholding;
	double netPay = grossPay - totalWithholding;

	// 打印
	cout << "Employee Name: " << name << endl;
	cout << "Hours Worked: " << hoursWork << endl;;
	cout << "Pay Rate: $" << payRate << endl;
	cout << "Gross Pay: $" << grossPay << endl;
	cout << "Deductions:" << endl;
	cout << "  Fedatal Withholding (" << fixed << setprecision(2)
		<< federalWithholdingRate * 100
		<< "%): $" << federalWithholding << endl;
	cout << "  State Withholding (" << stateWithholdingRate * 100
		<< " %): $" << stateWithholding << endl;
	cout << "  Total Deduction: $" << totalWithholding << endl;
	cout << "Net Pay: $" << netPay << endl;

	return 0;
}
