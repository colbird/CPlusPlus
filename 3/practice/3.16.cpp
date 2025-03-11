#include <iostream>
using namespace std;

int main(){
	// 输入三角形三边边长
	cout << "请输入三角形三边边长: ";
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;

	if (side1 + side2 <= side3){
		cout << "输入不合法" << endl;
		return 0;
	}

	cout << "三角形周长: " << side1 + side2 + side3 << endl;

	return 0;
}
