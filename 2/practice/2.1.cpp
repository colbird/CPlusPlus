#include <iostream>
using namespace std;

// 转换公式: fahrenheit = (9 / 5) * celsius + 32

int main(){
	
	// 输入Celsius
	double Celsius;
	cout << "Enter a degree in Celsius: ";
	cin >> Celsius;

	// 将Celsius转换为Fahrenheit
	double Fahrenheit = (9.0 / 5.0) * Celsius + 32;

	// 打印
	cout << Celsius << " Celsius is " << Fahrenheit << " Fahrenheit" << endl;
	
	return 0;
}
