#include <iostream>
#include <string>
using namespace std;

int main(){
	// 输入
	cout << "Enter the first 9 digit of an ISBN as integer: ";
	string number;
	cin >> number;

	char d10 = 
	  ((number.at(0) - '0') * 1
	 + (number.at(1) - '0') * 2
	 + (number.at(2) - '0') * 3
	 + (number.at(3) - '0') * 4
	 + (number.at(4) - '0') * 5
	 + (number.at(5) - '0') * 6
	 + (number.at(6) - '0') * 7 
	 + (number.at(7) - '0') * 8
	 + (number.at(8) - '0') * 9)% 11;
	 
	number += static_cast<char>(d10 == 10 ? 'X' : d10 + '0');

	cout << "The ISBN-10 number is "
	     << number << endl;
	return 0;
}
