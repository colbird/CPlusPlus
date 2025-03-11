#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const double R = 10.0;		// 圆的半径

	// 输入检查点坐标
	cout << "Enter a point with two coordinates: ";
	int x, y;
	cin >> x >> y;

	// 计算检查点距离圆心的距离
	double Distance = pow(pow(x, 2)+ pow(y, 2), 0.5);

	// 打印
	cout << "point (" << x << ", " << y << ") is"
	<< (Distance > R ? " not " : " ")
	<< "in the circle" << endl;

	return 0;
}
