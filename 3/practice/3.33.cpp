#include <iostream>
using namespace std;

int main(){
	// 输入年月日
	cout << "Enter year: (e.g., 2012): ";
	int year;
	cin >> year;
	cout << "Enter month: 1-12: ";
	int month;
	cin >> month;
	cout << "Enter the day of the month: 1-31: ";
	int day;
	cin >> day;

	int h;
	{
		int q = day;
		int m = month;
		int j = year / 100;
		int k = year % 100;
		h = (q +(26 *(m + 1)/10)+ k + k / 4 + j / 4 + 5 * j)% 7;
	}

	cout << "Day of the week is ";
	switch (h){
		case 0: cout <<  "星期六"<< endl; break;
		case 1: cout <<  "星期日"<< endl; break;
		case 2: cout <<  "星期一"<< endl; break;
		case 3: cout <<  "星期二"<< endl; break;
		case 4: cout <<  "星期三"<< endl; break;
		case 5: cout <<  "星期四"<< endl; break;
		case 6: cout <<  "星期五"<< endl; break;
	}

	return 0;
}
