#include <iostream>
using namespace std;

int main(){
	// 输入一个整数
	cout << "Enter an integer: ";
	int integer;
	cin >> integer;

	// 打印
	cout << "Is " << integer << " divisible by 5 and 6? "
	<< (!(integer % 5) && !(integer % 6) ? "true" : "flase" ) << endl;

	cout << "Is " << integer << " divisible by 5 or 6? "
	<< (!(integer % 5) || !(integer % 6) ? "true" : "flase" ) << endl;

	cout << "Is " << integer << " divisible by 5 or 6, but not both? "
	<< (!(integer % 5) && (integer % 6)
	|| ((integer % 5) && !(integer % 6)) ? "true" : "flase" ) << endl;

	return 0;
}
