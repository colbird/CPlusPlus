#include <iostream>
using namespace std;

int main(){

	// 输入年数
	cout << "Enter the number of year: ";
	double years;
	cin >> years;
	
	// 计算years后人数
	long people = 312032486;
	long totalS = years * 365 * 24 * 3600;
	long CS = totalS / 7;
	long SW = totalS / 13;
	long XYM = totalS / 45;
	people = people - SW + CS + XYM;
	
	// 打印结果
	cout << "The population in " << years << " years is " << people << endl;

	return 0;
}
