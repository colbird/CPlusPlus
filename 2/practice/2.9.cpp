#include <iostream>
using namespace std;

int main(){
	// 输入v0、v1和t
	cout << "Enter v0, v1 and t: ";
	double v0, v1, t;
	cin >> v0 >> v1 >> t;

	// 计算加速度
	double a = (v1 - v0) / t;

	// 打印结果
	cout << "The average acceleration is " << a << endl;

	return 0;
}
