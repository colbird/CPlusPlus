#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// Prompt the user to enter three points
	cout << "Enter three point: ";
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	// Compute three sides
	double a = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	double b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	double c = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

	// Obtain three angles in radians
	double A = acos((a * a - b * b - c * c)/(-2 * b * c));
	double B = acos((b * b - a * a - c * c)/(-2 * a * c));
	double C = acos((c * c - b * b - a * a)/(-2 * a * b));

	// Display the angles in degress
	const double PI = 3.14159;
	cout << "The three angles are " << A * 180 / PI << " "
	     << B * 180 / PI << " " << C * 180 / PI << endl;
	
	return 0;
}
