#include <iostream>
#include <ctime>

using namespace std;

int main(){
	// Obtain the total seconds since the midnight, Jan 1, 1970
	int totalSeconds = time(0) + 8 * 3600;

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
	cout << "Current time is " << currentHour << ":" << currentMinute << ":" << currentSecond << " GMT" << endl;


	return 0;
}
