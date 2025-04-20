#include <iostream>
#include <cmath>
using namespace std;

bool isValid(double side1, double side2, double side3){
	if ((side1 + side2 > side3)&&(side1 + side3 > side2)&&(side2 + side3 > side1))
		return true;
	else
		return false;
}

double area(double side1, double side2, double side3){
	double s = (side1 + side2 + side3)/ 2;
	double area = pow((s *(s-side1)*(s-side2)*(s-side3)), 0.5);
	return area;
}

int main(){
	cout << "Enter three sides: ";
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;
	if (isValid(side1, side2, side3)){
		cout << "area is " << area(side1, side2, side3) << endl;
	}
	
	return 0;
}
