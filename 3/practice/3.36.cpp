#include <iostream>
using namespace std;

int main(){
	// 输入一个三位数
	cout << "Enter a three-digit integer: ";
	int digit;
	cin >> digit;

	if (digit / 100 == digit % 10)
		cout << digit << " is a palindrome" << endl;
	else
		cout << digit << " is not a palindrome" << endl;
	return 0;
}
