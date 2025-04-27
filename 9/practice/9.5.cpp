#include <iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time();
        Time(int);
        int getHour() const;
        int getMinute() const;
        int getSecond() const;
        void setTime(int);
};

Time::Time(){
    int empTime = time(0);
    second = empTime % 60;
    empTime /= 60;
    minute = empTime % 60;
    empTime /= 60;
    hour = (empTime + 8)% 24;
}

Time::Time(int empTime){
    second = empTime % 60;
    empTime /= 60;
    minute = empTime % 60;
    empTime /= 60;
    hour = (empTime + 8)% 24;
}

int Time::getHour() const{
    return hour;
}

int Time::getMinute() const{
    return minute;
}

int Time::getSecond() const{
    return second;
}

void Time::setTime(int empTime){
    second = empTime % 60;
    empTime /= 60;
    minute = empTime % 60;
    empTime /= 60;
    hour = (empTime + 8)% 24;
}

int main(){
    Time time1;
    Time time2(555550);
    cout << "time1: " << time1.getHour() << ":" << time1.getMinute() << ":" << time1.getSecond() << endl;
    cout << "time2: " << time2.getHour() << ":" << time2.getMinute() << ":" << time2.getSecond() << endl;
    return 0;
}
