#include <iostream>
#include <cmath>
using namespace std;


int main(){
	// 输入户外的温度和风速
	cout << "Enter the temperature in Fahrenheit: ";
	double Fahrenheit;
	cin >> Fahrenheit;

	cout << "Enter the wind speed in miles per hour: ";
	double speed;
	cin >> speed;

	if (Fahrenheit <= -58 && Fahrenheit >= 41){
		cout << "温度无效" << endl;
		return 0;
	}
	if (speed < 2){
		cout << "风速无效" << endl;
		return 0;
	}


	// 计算风冷温度
	double windChill = 35.74 + 0.62158 * Fahrenheit - 35.75 * pow(speed, 0.16) + 
	  0.4275 * Fahrenheit * pow(speed, 0.16);

	// 打印结果
	cout << "The wind chill index is " << windChill << endl;

	return 0;
}
