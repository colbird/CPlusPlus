#include <iostream>
#include <cmath>
using namespace std;

// 计算公式
// length = v^2 / 2a;

int main(){
	
	// 输入速度和加速度
	cout << "Enter speed and acceleration: ";
	double speed, acceleration;
	cin >> speed >> acceleration;

	// 计算最短跑道长度
	double length = pow(speed, 2) / (2 * acceleration);
	
	// 打印结果
	cout << "The minimum runway length for this airplane is " << length << endl;

	return 0;
}
