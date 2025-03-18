#include <iostream>
#include <cctype>
using namespace std;

int main(){
	// 输入
	cout << "Enter a letter grade: ";
	char characcter;
	cin >> characcter;
	char temp = tolower(characcter);

	if (isalnum(temp) && temp <= 'f'){
		cout << "The binary value is ";
		int number = (isdigit(temp) ? (temp - '0') : (10 + temp - 'a'));
		bool bin1 = number % 2;
		number /= 2;
		bool bin2 = number % 2;
		number /= 2;
		bool bin3 = number % 2;
		number /= 2;
		bool bin4 = number % 2;
		cout << bin4 << bin3 << bin2 << bin1 << endl;
	}
	else
		cout << characcter << " is an invalid frade" << endl;
	return 0;
}
