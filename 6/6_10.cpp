#include <iostream>
using namespace std;

inline void f (int month, int year){
    cout << "month is " << month << endl;
    cout << "year is " << year << endl;
}

int main(){
    int month = 10, year = 2008;
    cout << "month is " << month << endl;
    cout << "year is " << year << endl;
    cout << "month is " << 9 << endl;
    cout << "year is " << 2010 << endl;

    return 0;
}
