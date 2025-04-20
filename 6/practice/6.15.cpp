#include <iostream>
using namespace std;

int numberOfDaysInAYear(int year){
	if ((year % 4 == 0 && year % 100)|| year % 400 == 0)
		return 366;
	return 365;
}

int main(){
	for (int i = 2000; i <= 2010; i++){
		cout << numberOfDaysInAYear(i) << endl;
	}
}
