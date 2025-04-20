#include <iostream>
#include <iomanip>
using namespace std;

double computeTax(int status, double taxableIncome){
	double tax = 0;
	switch(status){
		case 0: case 2:
			tax = 8350 * 0.1 + (33950 - 8350)* 0.15 +
				(taxableIncome - 33950)* 0.25;
			break;
		case 1:
			tax = 16700 * 0.1 + (taxableIncome - 16700)* 0.15;
			break;
		case 3:
			tax = 11950 * 0.1 + (45500 - 11950)* 0.15 +
				(taxableIncome - 45500)* 0.25;
			break;
	}
	return tax;
}

int main(){
	for (int i = 50000; i <= 60000; i += 50){
		cout << setw(10) << left << i;
		for (int j = 0; j < 4; j++){
			cout << setprecision(0) << fixed << setw(10) << left 
				<< (computeTax(j, i));
		}
		cout << endl;
	}
	return 0;
}
