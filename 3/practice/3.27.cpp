#include <iostream>
#include <ctime>

using namespace std;

int main(){
	// 输入时差例如：-5, 8
	cout << "Enter the time zone offset to GMT: ";
	double timeZoneOffset = 0;
	cin >> timeZoneOffset;

	// Obtain the total seconds since the midnight, Jan 1, 1970
	int totalSeconds = time(0) + timeZoneOffset * 3600;

	// Compute the current second in the minute in the hour
	int currentSecond = totalSeconds % 60;

	// Obtain the total minutes
	int totalMinutes = totalSeconds / 60;

	// Compute the current minyte in the hour
	int currentMinute = totalMinutes % 60;

	// Obtain the total hours
	int totalHours = totalMinutes / 60;

	// Compute the current hour
	int currentHour = totalHours % 24;

	// Display resylts
	cout << "Current time is " << currentHour  % 12 << ":" << currentMinute << ":" << currentSecond
	<< (currentHour < 12 ? " AM" : " PM") << endl;


	return 0;
}
