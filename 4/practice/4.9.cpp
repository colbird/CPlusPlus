#include <iostream>
using namespace std;

int main(){
	// 输入
	cout << "Enter a character: ";
	char character;
	cin >> character;
	
	// 打印
	cout << "The ASCII code for the character is " << static_cast<int>(character) << endl;

	return 0;
}
