#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	// 输入
	cout << "Enter point 1  (latitude and longitde) in degrees: ";
	double x1, y1;
	cin >> x1 >> y1;


	cout << "Enter point 2  (latitude and longitde) in degrees: ";
	double x2, y2;
	cin >> x2 >> y2;

	// 计算
	const double RADIUS = 6378.1;		// 平均地球半径
	double degrees = RADIUS 
		* acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));
	
	cout << "The distance between the two points is " << fixed << setprecision(11) << degrees << " km" << endl;
	return 0;
}

