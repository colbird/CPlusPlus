#include <iostream>
#include <cctype>
using namespace std;

int main(){
	// 输入
	cout << "Enter a letter: ";
	char character;
	cin >> character;

	if (isalpha(character))
		cout << "The lowercase letter is " << static_cast<char>(tolower(character)) << endl;
	else 
		cout << character << " is an inval input " << endl;

	return 0;
}
