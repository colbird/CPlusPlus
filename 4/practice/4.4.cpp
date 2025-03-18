#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	const double PI = 3.14159262535;
	// 输入
	cout << "Enter the side: ";
	double side;
	cin >> side;

	// 计算
	double Area = 6 * pow(side, 2)/(4 * tan(PI/6));

	// 打印
	cout << "The area of the hexagon is " << fixed << setprecision(2) << Area << endl;

	return 0;
}
