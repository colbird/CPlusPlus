#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	const double PI = 3.14159262535;
	// 输入
	cout << "Enter the number of sides: ";
	double number;
	cin >> number;

	cout << "Enter the side: ";
	double side;
	cin >> side;

	// 计算
	double Area = number * pow(side, 2)/(4 * tan(PI/number));

	// 打印
	cout << "The area of the hexagon is " << fixed << setprecision(2) << Area << endl;

	return 0;
}
