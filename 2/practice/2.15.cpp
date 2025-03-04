#include <iostream>
#include <cmath>
using namespace std;


int main(){
	// 输入点1的xy
	cout << "Enter x1 and y1: ";
	double x1, y1;
	cin >> x1 >> y1;
	// 输入点2的xy
	cout << "Enter x2 and y2: ";
	double x2, y2;
	cin >> x2 >> y2;

	// 计算两点之间距离
	double distanceBetween = pow(pow(x2 - x1, 2)+pow(y2 - y1, 2), 0.5);

	// 打印结果
	cout << "The distance between the two points is " << distanceBetween << endl;

	return 0;
}
