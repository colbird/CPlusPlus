#include <iostream>
using namespace std;

int main(){
	
	// Prompt the user to enter weight in pounds
	cout << "Enter weight in pounds: ";
	double weight;
	cin >> weight;

	// 输入英尺
	cout << "Enter feet: ";
	double feet;
	cin >> feet;

	// 输入英寸
	cout << "Enter inches: ";
	double inches;
	cin >> inches;

	const double KILOGRAMS_PER_POUND = 0.45359237;	// Constant
	const double METERS_PER_INCH = 0.0254;		// Constant

	// Compute BMI
	double weightInKilograms = weight * KILOGRAMS_PER_POUND;
	double heightInMeters = (feet * 12 + inches) * METERS_PER_INCH;
	double bmi = weightInKilograms /
	  (heightInMeters * heightInMeters);

	// Display result
	cout << "BMI is " << bmi << endl;
	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi < 25)
		cout << "Normal" << endl;
	else if (bmi < 30)
		cout << "Overweight" << endl;
	else
		cout << "Obese" << endl;

	return 0;
}
