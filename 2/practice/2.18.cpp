#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b;
	a = 1;
	b = 2;
	// 打印结果
	cout << "a\tb\tpow(a, b)" << endl;
	cout << a << "\t" << b << "\t" << pow(a++, b++) << endl;
	cout << a << "\t" << b << "\t" << pow(a++, b++) << endl;
	cout << a << "\t" << b << "\t" << pow(a++, b++) << endl;
	cout << a << "\t" << b << "\t" << pow(a++, b++) << endl;
	cout << a << "\t" << b << "\t" << pow(a++, b++) << endl;

	return 0;
}
