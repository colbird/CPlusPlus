#include <iostream>
#include <cctype>
using namespace std;

int main(){
	// 输入
	cout << "Enter a letter: ";
	char character;
	cin >> character;

	// 判断 1. 元音 2. 辅音 3. 不是字母
	char temp = tolower(character);
	if (isalpha(temp)){
		if ( temp == 'a' || temp == 'e' || temp == 'i'
		  || temp == 'o' || temp == 'u')
			cout << character << " is a vowel" << endl;
		else
			cout << character << " is a consonant" << endl;
	}
	else
		cout << character << " is an invalid input" << endl;
	
	return 0;
}
