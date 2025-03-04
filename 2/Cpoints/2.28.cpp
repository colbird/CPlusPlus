#include <iostream>
using namespace std;

int main(){
	double tax;
	cin >> tax;
	cout << static_cast<int>(tax * 100) / 100.0 << endl;
	cout << static_cast<int>(tax * 100) / 100 << endl;

	return 0;
}
