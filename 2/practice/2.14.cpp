#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// 输入体重(镑)
	cout << "Enter weight in pounds: ";
	double weight;
	cin >> weight;

	// 输入身高(英尺)
	cout << "Enter height in inches: ";
	double height;
	cin >> height;

	// 计算BMI
	double BMI = (weight * 0.45359237)/pow((height * 0.0254), 2);

	// 打印结果
	cout << "BMI is " << BMI << endl;

	return 0;
}
