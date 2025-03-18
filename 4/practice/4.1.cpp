#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	// 输入
	cout << "Enter the length from the center to a vertex: ";
	double r;
	cin >> r;

	const double PI = 3.1415926;

	// 计算
	double s = 2 * r * sin(PI / 5);
	double Area = (5 * pow(s, 2))/(4 * tan(PI / 5));

	// 打印
	cout << "The area of the pentagon is " << fixed << setprecision(2) << Area << endl;

	return 0;
}
