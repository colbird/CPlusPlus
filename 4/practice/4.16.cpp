#include <iostream>
#include <string>
using namespace std;

int main(){
	// 输入一个字符串
	cout << "输入一个字符串: ";
	string str;
	getline(cin, str);

	cout << "字符串长度为: " << str.length() << " 第一个字符: " << str.at(0) << endl;;
	return 0;
}
