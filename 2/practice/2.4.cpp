#include <iostream>
using namespace std;

// 1镑等于0.454千克

int main(){
	// 输入镑数
	cout << "Enter a number in pounks: ";
	double pounks;
	cin >> pounks;

	// 换算
	double kilograms = pounks * 0.454;

	// 打印结果
	cout << pounks << "pounks is " << kilograms << " kilograms" << endl;

	return 0;
}
