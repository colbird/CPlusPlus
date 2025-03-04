#include <iostream>
using namespace std;

int main(){
	// 输入消费和小费费率
	cout << "Enter the subtotal and a gratuity rate: ";
	double subtotal, gratuityRate;
	cin >> subtotal >> gratuityRate;
	
	// 计算小费和消费总计
	double gratuity = subtotal * gratuityRate / 100;
	double total = subtotal + gratuity;

	// 打印结果
	cout << "The gratuity is $" << gratuity << " and total is $" << total << endl;

	return 0;
}
