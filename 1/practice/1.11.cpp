#include <iostream>
using namespace std;

int main(){
	long people = 312032486;
	long yearS = 5 * 365 * 24 * 3600;

	long CS = yearS / 7;
	long SW = yearS / 13;
	long XYM = yearS / 45;

	people = people - SW + CS + XYM;
	cout << people << endl;
	return 0;
}
