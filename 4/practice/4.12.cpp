#include <iostream>
#include <cctype>
using namespace std;

int main(){
	// 输入
	cout << "Enter a letter grade: ";
	char characcter;
	cin >> characcter;
	char temp = tolower(characcter);

	if (temp >= 'a' && temp <= 'f' && temp != 'e')
		if ( temp == 'f' )
			cout << "The numeric value for grade " << characcter << " is "
				<< 0<< endl;
		else
			cout << "The numeric value for grade " << characcter << " is "
				<< (4 - (temp - 'a')) << endl;
	else
		cout << characcter << " is an invalid frade" << endl;
	return 0;
}
