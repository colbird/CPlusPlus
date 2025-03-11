#include <iostream>
#include <cmath>
using namespace std;

// 解二次方程

int main(){

	// 输入a b c 三个数
	cout << "Enter a, b, c: ";
	double a, b, c;
	cin >> a >> b >> c;

	// 计算有几个根
	int haveRoot = pow(b, 2) - 4 * a * c;

	// 打印结果
	if (haveRoot >= 0) {		// 两个根
		double r1 = (-b + pow(pow(b, 2) - 4 * a * c, 0.5))/ 2.0 * a;
		double r2 = (-b - pow(pow(b, 2) - 4 * a * c, 0.5))/ 2.0 * a;
		if (!haveRoot)		// 一个根
			cout << "The root is " << r1 << endl;
		else
			cout << "The roots are " << r1 << " " << r2 << endl;
	}		
	else {			// 没有实数根
		cout << "The equation has no real roots" << endl;
	}
	return 0;
}
