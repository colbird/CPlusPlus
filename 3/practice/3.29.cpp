#include <iostream>
using namespace std;

int main(){
	// 输入三个点的坐标
	cout << "Enter three point for p0 , p1 and p2: ";
	double x0, y0, x1, y1, x2, y2;
	cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;

	int position = (x1 -x0)*(y2 - y0)-(x2 - x0)*(y1 - y0);

	cout << "p2 is on the "
	<<(position == 0 ? "same" : (position > 0 ? "left side of the" : "right side fo the"))
	<< " line" << endl;

	return 0;
}
