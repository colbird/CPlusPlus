#include <iostream>
using namespace std;


int main(){
	
	// 输入两个整数
	cout << "Enter two integers: ";
	int number1, number2;
	cin >> number1 >> number2;

	// 打印
	if (number1 % number2)
		cout << number1 << " is not diviible by " << number2 << endl;
	else
		cout << number1 << " is diviible by " << number2 << endl;

	return 0;
}
