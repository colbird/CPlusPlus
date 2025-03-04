#include <iostream>
using namespace std;

int main(){
	// 输入两个点的坐标
	cout << "Enter the coordinates for two points: ";
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	// 计算两点的斜率
	double coordinates = (y2 - y1)/(x2 - x1);

	// 打印结果
	cout << "The slope for the line that connects two points (" <<
	  x1 << ", " << y1 << " and (" << x2 << ", " << y2 << ") is " << coordinates << endl;
		 
	return 0;
}
