#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// 输入六边形的边
	cout << "Enter the side: ";
	double side;
	cin >> side;

	// 计算六边形的面积
	double area = 3 * pow(3, 0.5) / 2 * pow(side, 2);

	// 打印结果
	cout << "The area of the hexagon is " << area << endl;

	return 0;
}
