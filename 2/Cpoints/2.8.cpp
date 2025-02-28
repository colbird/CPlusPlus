#include <iostream>
using namespace std;

int main(){
	// Step 1: 声明一个double型的变量, 名为miles, 初始值为 100.
	double miles = 100;

	// Step 2: 声明一个double型的常量, 名为KILOMETERS_PER_MILE, 值为1.609
	const double KILOMETERS_PER_MILE = 1.609;
	
	// Step 3: 声明一个double型的变量, 名为kilometers, 将miles和KILOMETERS_PER_MILE相乘, 并将结果赋值给kilometers
	double kilometers = miles * KILOMETERS_PER_MILE;

	// Step 4: 在控制台上显示kilometers的值
	cout << kilometers << endl;

	return 0;
}
