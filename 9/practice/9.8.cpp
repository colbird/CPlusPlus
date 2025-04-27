#include <iostream>
using namespace std;

class Date{
    private:
        int year;
        int month;
        int day;
    public:
        Date();
        Date(int);
        int getYear() const;
        int getMonth() const;
        int getDay() const;
        void setDate(int);
};

bool isLeapYear(int year){
    return  ((year % 4 == 0 && year % 100)|| year % 400 == 0);
}

int monthToDay(int year, int month){
    if (month == 4 || month == 6 || month == 9 || month == 11){
        return 30;
    }
    else if (month == 2){
       if (isLeapYear(year))
           return 29;
       else
           return 28;
    }
    else
        return 31;
}

Date::Date(){
    int emptime = time(0);
    int totalDays = emptime /(3600 * 24);
    year = 1970;
    month = 1;
    day = 1;
    while (isLeapYear(year) ? (totalDays >= 366) : (totalDays >= 365)){
        if (isLeapYear(year)){
            totalDays -= 366;
        }
        else{
            totalDays -= 365;
        }
        year++;
    }

    while (totalDays >= monthToDay(year, month)){
        totalDays -= monthToDay(year, month);
        month++;
    }
    day += totalDays;
}

Date::Date(int emptime){
    int totalDays = emptime /(3600 * 24);
    year = 1970;
    month = 1;
    day = 1;
    while (isLeapYear(year) ? (totalDays >= 366) : (totalDays >= 365)){
        if (isLeapYear(year)){
            totalDays -= 366;
        }
        else{
            totalDays -= 365;
        }
        year++;
    }

    while (totalDays >= monthToDay(year, month)){
        totalDays -= monthToDay(year, month);
        month++;
    }
    day += totalDays;
}

int Date::getYear() const{
    return year;
}

int Date::getMonth() const{
    return month;
}

int Date::getDay() const{
    return day;
}

void Date::setDate(int emptime){
    int totalDays = emptime /(3600 * 24);
    year = 1970;
    month = 1;
    day = 1;
    while (isLeapYear(year) ? (totalDays >= 366) : (totalDays >= 365)){
        if (isLeapYear(year)){
            totalDays -= 366;
        }
        else{
            totalDays -= 365;
        }
        year++;
    }
    while (totalDays >= monthToDay(year, month)){
        totalDays -= monthToDay(year, month);
        month++;
    }
    day += totalDays;
}

int main(){
    Date date1;
    Date date2(561555550);
    
    cout << "date1: " << date1.getYear() << " " << date1.getMonth() << " " << date1.getDay() << endl;
    cout << "date2: " << date2.getYear() << " " << date2.getMonth() << " " << date2.getDay() << endl;
    return 0;
}
