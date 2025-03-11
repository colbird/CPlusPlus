#include <iostream>
using namespace std;

// 对3个整数排序

int main(){
	// 输入3个整数
	cout << "请输入3个整数: ";
	int a, b, c;
	cin >> a >> b >> c;

	// 3 2 1

	if (a > b){
		int temp = a;
		a = b;
		b = temp;
	}
	if (b > c){
		int temp = b;
		b = c;
		c = temp;
	}
	if (a > b){
		int temp = a;
		a = b;
		b = temp;
	}

	// 打印
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	
	return 0;
}
