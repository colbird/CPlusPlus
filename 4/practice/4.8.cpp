#include <iostream>
using namespace std;

int main(){
	// 输入ASCII码(0 ~ 127)
	cout << "Enter an ASCII code: ";
	int asciiCode;
	cin >> asciiCode;

	if (asciiCode <= 127 && asciiCode >= 0)
		cout << "The character is " << static_cast<char>(asciiCode) << endl;
	else 
		cout << "in an invalid input" << endl;
	return 0;
}
