#include <iostream>
using namespace std;

// 计算公式
// Q = M * (finalTempetature - initalTempetature) * 4184;
// M 单位为 千克
// Q 单位为 焦耳
int main(){
	// 输入水的重量、初始温度和最末温度
	cout << "Enter the amount of water in kilograms: ";
	double M;
	cin >> M;
	cout << "Enter the initial temperature: ";
	double initalTempetature;
	cin >> initalTempetature;
	cout << "Enter the final temperature: ";
	double finalTempetature;
	cin >> finalTempetature;
	
	// 计算加热所需的能量
	double Q = M * (finalTempetature - initalTempetature) * 4184.0;

	// 打印结果
	cout << "The energt needed is " << Q << endl;
	return 0;
}
