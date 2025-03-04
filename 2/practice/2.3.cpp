#include <iostream>
using namespace std;

// 1英尺等于0.305米

int main(){
	// 输入英尺
	cout << "Enter a value for feet: ";
	double feet;
	cin >> feet;

	// 将英尺转换为米
	double meters = feet * 0.305;

	// 打印结果
	cout << feet << " feet is " << meters << " meters" << endl;
	return 0;
}
