#include <iostream>
using namespace std;

int main(){
	// 输入
	cout << "Enter the first 9 digit of an ISBN as integer: ";
	int number;
	cin >> number;

	// 处理
	int d1, d2, d3, d4, d5, d6, d7, d8, d9; 
	d9 = number % 10;
	number /= 10;
	d8 = number % 10;
	number /= 10;
	d7 = number % 10;
	number /= 10;
	d6 = number % 10;
	number /= 10;
	d5 = number % 10;
	number /= 10;
	d4 = number % 10;
	number /= 10;
	d3 = number % 10;
	number /= 10;
	d2 = number % 10;
	number /= 10;
	d1 = number % 10;

	int d10 = 
	  (d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 + d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9)% 11;
	 
	cout << "The ISBN-10 number is "
	     << d1 << d2 << d3 << d4 << d5 << d6 << d7 << d8 << d9 << static_cast<char>(d10 == 10 ? 'X' : d10 + '0') << endl;
	return 0;
}
