#include <iostream>
using namespace std;

int main(){
	// 输入
	cout << "Enter a decimal value (0 to 15): ";
	int number;
	cin >> number;

	if (number >= 0 && number <= 15)
		cout << "The hex value is "
		     << static_cast<char>(number < 10 ? (number + '0') : (number - 10 + 'A' )) << endl;
	else
		cout << number << " is an invalid input" << endl;
	return 0;
}
