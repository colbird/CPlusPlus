#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void printMonth(int year, int month);
void printMonthTitle(int year, int month);
void printMonthName(int month);
void printMonthBody(int year, int month);
int getStartDay(int year, int month);
int getNumberOfDaysInMonth(int year, int month);
bool isLeapYear(int year);


int main(){
    // Prompt the user to enter year
    cout << "Enter full year (e.g., 2001): ";
    int year;
    cin >> year;

    // Prompt the user to enter month
    cout << "Enter month in number between 1 and 12: ";
    int month;
    cin >> month;
    
    // Print calendar for the month of the year
    printMonth(year, month);

    return 0;
}

// Print the calendar for a month in a year
void printMonth(int year, int month){
    // Print the headings of the calendar
    printMonthTitle(year, month);

    // Print the body of the calendar
    printMonthBody(year, month);
}

// Print the month title, e.g., May, 1999
void printMonthTitle(int year, int month){
    printMonthName(month);
    cout << " " << year << endl;
    cout << "-----------------------------" << endl;
    cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
}

void printMonthName(int month){
    switch(month){
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "February";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
    }
}

// Print month body
void printMonthBody(int year, int month){
    // Get start day of the week for the first data in the month
    int startDay = getStartDay(year, month);

    // Get number of day in the month
    int numberOfDaysInMonth = getNumberOfDaysInMonth(year, month);

    // Pad space before the first day of the month
    int i = 0;
    for (i = 0; i < startDay; i++)
        cout << "    ";
    
    for (i = 1; i <= numberOfDaysInMonth; i++){
        cout << setw(4) << i;
        if ((i + startDay)% 7 == 0)
            cout << endl;
    }
    cout << endl;
}

// Get the start day of the first day in a month
int getStartDay(int year, int month){
    // 这个月中的日期
    int q = 1;

    // 月份
    int m = ((month == 1 || month == 2) ? month + 12 : month);
    
    // 世纪
    int j = (month <= 2 ? year-1 : year) / 100;

    // 世纪中的年
    int k = (month <= 2 ? year-1 : year) % 100;

    int h = (q +(26 *(m + 1)/10)+ k + k / 4 + j / 4 + 5 * j)% 7;
    return (h+6)%7;
}

// Get the number of days in a month
int getNumberOfDaysInMonth(int year, int month){
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        return 31;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    if (month == 2) return isLeapYear(year) ? 29 : 28 ;
        return 31;
    
    return 0;
}

bool  isLeapYear(int year){
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}
