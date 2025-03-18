#include <iostream>
#include <cctype>
using namespace std;

int main(){
	// 输入
	cout << "Enter a letter: ";
	char letter;
	cin >> letter;

	// 处理
	letter = tolower(letter);

	if (isalpha(letter)){
		cout << "The corresponding number is ";
		cout << (static_cast<int>(letter) - 1) / 3 - 30 << endl;
	}
	else
		cout << letter << " is an invalid input" << endl;
	return 0;
}
