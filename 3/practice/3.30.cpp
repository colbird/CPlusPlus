#include <iostream>
using namespace std;

int main(){
	// 输入输入两袋大米重量和价格
	cout << "Enter weight and price for package 1: ";
	double w1, p1;
	cin >> w1 >> p1;

	cout << "Enter weight and price for package 2: ";
	double w2, p2;
	cin >> w2 >> p2;

	double status = (p1 / w1 - p2 / w2);
	
	if (!status)
		cout << "Two packages have the same price." << endl;
	else
		cout << "Package " << (status < 0 ? "1" : "2") << " has a better price." << endl;

	return 0;
}
