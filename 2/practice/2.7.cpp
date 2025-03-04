#include <iostream>
using namespace std;

int main(){
	// 输入分钟
	cout << "Enter the number of minutes: ";
	long totalMinutes;
	cin >> totalMinutes;
	
	// 计算年数和天数
	// 一天有1440分钟
	long totalDays = totalMinutes / 1440;
	long days = totalDays % 365;
	long years = totalDays / 365;

	// 打印结果
	cout << totalMinutes << " minutes is approximately " << years << " years and " << days << endl;

	return 0;
}
