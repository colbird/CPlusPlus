#include <iostream>
using namespace std;

int main(){
	// 输入驾驶距离、耗油效率和价格
	cout << "Enter the driving distance: ";
	double drivingDistance;
	cin >> drivingDistance;

	cout << "Enter miles per gallon: ";
	double milesPerGallon;
	cin >> milesPerGallon;
	
	cout << "Enter price per gallon: ";
	double pricePerGallon;
	cin >> pricePerGallon;

	// 计算这趟路程的花费
	double costOfDriving = drivingDistance / milesPerGallon * pricePerGallon;

	// 打印结果
	cout << "The cost of driving is $" << static_cast<int>(costOfDriving * 100)/ 100.0  << endl;

	return 0;
}
