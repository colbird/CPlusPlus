#include <iostream>
using namespace std;

int main(){
	// 输入x1、y1、x2、y2、x3、y3、x4、y4
	cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	
	// 打印结果
	double a = (y1 - y2);
	double b = (x1 - x2);
	double c = (y3 - y4);
	double d = (x3 - x4);
	double e = a * x1 - b * y1;
	double f = c * x3 - d * y3;

	if (a * d - b * c){
		double x, y;
		x = (e * d - b * f)/(a * d - b * c);
		y = (a * f - e * c)/(a * d - b * c);

		cout << "The intersecting point is at(" << x << ", " << y << ")" << endl;
	}
	else
		cout << "The two lines are parallel" << endl;
	return 0;
}
