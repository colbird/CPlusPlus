
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const double length = 10.0;		// 矩形的长
	const double width = 5.0;		// 矩形的宽

	// 输入检查点坐标
	cout << "Enter a point with two coordinates: ";
	int x, y;
	cin >> x >> y;

	// 打印
	cout << "point (" << x << ", " << y << ") is"
	<< ((abs(x) > length / 2 || abs(y) > width / 2)? " not " : " ")
	<< "in the circle" << endl;

	return 0;
}
