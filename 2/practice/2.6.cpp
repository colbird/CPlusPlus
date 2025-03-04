#include <iostream>
using namespace std;

int main(){
	// 输入0~1000范围内的数字
	cout << "Enter a number between 0 and 1000: ";
	int number;
	cin >> number;

	// 计算个位、十位和百位的和
	int gw = number % 10;
	number /= 10;
	int sw = number % 10;
	number /= 10;
	int bw = number % 10;
	number /= 10;
	int sum = gw + sw + bw;

	// 打印结果
	cout << "The sum of the digits is " << sum << endl;

	return 0;
}
