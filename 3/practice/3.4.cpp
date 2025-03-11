#include <iostream>
using namespace std;

int main(){
	// 输入温度(华氏度)
	cout << "请输入温度(华氏度): ";
	double temperature;
	cin >> temperature;

	if (temperature < 30)
		cout << "too cold" << endl;
	else if (temperature > 100)
		cout << "too hot" << endl;
	else
		cout << "just right" << endl;
	return 0;
}
