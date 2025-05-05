#include <iostream>
#include "RegularPolygon.h"
using namespace std;

int main(){
	RegularPolygon regular1;
	RegularPolygon regular2(6, 4);
	RegularPolygon regular3(10, 4, 5.6, 7.8);

	cout << "1: " << regular1.getPerimeter() << " " << regular1.getArea() << endl;
	cout << "2: " << regular2.getPerimeter() << " " << regular2.getArea() << endl;
	cout << "3: " << regular3.getPerimeter() << " " << regular3.getArea() << endl;
	return 0;
}
