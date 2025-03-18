#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

	const double RADIUS = 6378.1;		// 平均地球半径

	double x1 = 33.7489954;
	double y1 = -84.3879824;
	double x2 = 28.5383355;
	double y2 = -81.3792365;
	double x3 = 32.0835407;
	double y3 = -81.0998342;
	double x4 = 35.2270869;
	double y4 = -80.8431267;
	
	// 计算第一个三角
	double side1 = RADIUS 
		* acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));
	double side2 = RADIUS 
		* acos(sin(x1) * sin(x4) + cos(x1) * cos(x4) * cos(y1 - y4));
	double side3 = RADIUS 
		* acos(sin(x4) * sin(x2) + cos(x4) * cos(x2) * cos(y4 - y2));
	double s = (side1 + side2 + side3)/ 2;
	double totalArea = pow(s*(s-side1)*(s-side2)*(s-side3), 0.5);
	
	// 计算第二个三角
	side1 = RADIUS 
		* acos(sin(x3) * sin(x2) + cos(x3) * cos(x2) * cos(y3 - y2));
	side2 = RADIUS 
		* acos(sin(x3) * sin(x4) + cos(x3) * cos(x4) * cos(y3 - y4));
	s = (side1 + side2 + side3)/ 2;
	totalArea += pow(s*(s-side1)*(s-side2)*(s-side3), 0.5);
	
	cout << "4个城市范围之内的估算面积: " << fixed << totalArea << "平方千米" << endl;

	return 0;
}
