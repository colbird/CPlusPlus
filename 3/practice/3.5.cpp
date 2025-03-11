#include <iostream>
using namespace std;

int main(){
	// 输入今天星期几
	cout << "Enter today's day: ";
	int day;
	cin >> day;
	
	// 输入未来某天距今天共几天
	cout << "Enter the number of days elapsed since todat: ";
	int numberDays;
	cin >> numberDays;

	// 打印结果
	switch (numberDays % 7 + day){
		case 0: cout << "Sunday" << endl; break;
		case 1: cout << "Monday" << endl; break;
		case 2: cout << "Tuesday" << endl; break;
		case 3: cout << "Wednesday" << endl; break;
		case 4: cout << "Thursday" << endl; break;
		case 5: cout << "Friday" << endl; break;
		case 6: cout << "Saturday" << endl; break;
	}
	return 0;
}
