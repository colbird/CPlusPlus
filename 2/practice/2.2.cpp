#include <iostream>
using namespace std;

// 公式
// area = radius * radius * Pi
// volume = area * length


int main(){
	const double PI = 3.14159;
	// 输入radius和length
	cout << "Enter the radius and length of a cylinder: ";
	double radius, length;
	cin >> radius >> length;

	// 计算area和volume
	double area = radius * radius * PI;
	double volume = area * length;

	// 打印结果
	cout << "The area is " << area << endl;
	cout << "The volume is " << volume << endl;

	return 0;
}
