#include <iostream>
#include <string>
using namespace std;

int main(){
	// 输入
	cout << "Enter a year: ";
	int year;
	cin >> year;

	cout << "Enter a month: ";
	string month;
	cin >> month;

	if (month == "Jan"
	 || month == "Mar"
	 || month == "May"
	 || month == "Jul"
	 || month == "Aug"
	 || month == "Oct"
	 || month == "Dec")
		cout << month << " " << year << " has 31 days" << endl;
	else if (month == "Apr"
	      || month == "Jun"
	      || month == "Sep"
	      || month == "Nov")
		cout << month << " " << year << " has 30 days" << endl;
	else if (month == "Feb")
		cout << month << " " << year << " has "
		  << (!(year % 4) && (year % 100 != 0) || !(year % 400) ? 29 : 28)<< " days" << endl;
	else 
		cout << month << " is not a correct month name" << endl;

	return 0;
}
