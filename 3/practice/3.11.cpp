#include <iostream>
using namespace std;

int main(){
	// 输入包裹的重量
	cout << "请输入包裹的重量: ";
	double weight;
	cin >> weight;

	if (weight > 0 && weight <= 1)
		cout << "价格: 3.5 美元" << endl;
	else if (weight > 1 && weight <= 3)
		cout << "价格: 5.5 美元" << endl;
	else if (weight > 3 && weight <= 10)
		cout << "价格: 8.5 美元" << endl;
	else if (weight > 10 && weight <= 20)
		cout << "价格: 10.5 美元" << endl;
	else
		cout << "the package cannot be shipped" << endl;
		
	return 0;
}
