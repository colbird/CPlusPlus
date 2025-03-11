#include <iostream>
using namespace std;

int main(){
	// 输入a、b、c、d、e和f
	cout << "Enter a, b, c, d, e, f: ";
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	
	// 打印结果
	if (a * d - b * c){
		double x, y;
		x = (e * d - b * f)/(a * d - b * c);
		y = (a * f - e * c)/(a * d - b * c);

		cout << "x is " << x << " and y is " << y << endl;
	}
	else
		cout << "The equation has solution" << endl;
	return 0;
}
