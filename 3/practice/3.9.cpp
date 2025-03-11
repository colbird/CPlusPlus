#include <iostream>
using namespace std;

int main(){
	//  输入月份和年份
	cout << "请输入月份和年份: ";
	int month, year;
	cin >> month >> year;

	// 打印结果
	
	switch (month){
		case 1: cout << year << "年" << month << "月有31天" << endl; break;

		case 2: if (year % 4 && !(year % 100) || year % 400)		// 判断是不是闰年
				cout << year << "年" << month << "月有29天" << endl;
			else
				cout << year << "年" << month << "月有28天" << endl;
			break;

		case 3: cout << year << "年" << month << "月有31天" << endl; break;
		case 4: cout << year << "年" << month << "月有30天" << endl; break;
		case 5: cout << year << "年" << month << "月有31天" << endl; break;
		case 6: cout << year << "年" << month << "月有30天" << endl; break;
		case 7: cout << year << "年" << month << "月有31天" << endl; break;
		case 8: cout << year << "年" << month << "月有31天" << endl; break;
		case 9: cout << year << "年" << month << "月有30天" << endl; break;
		case 10: cout << year << "年" << month << "月有31天" << endl; break;
		case 11: cout << year << "年" << month << "月有30天" << endl; break;
		case 12: cout << year << "年" << month << "月有31天" << endl; break;
	}
	return 0;
}
