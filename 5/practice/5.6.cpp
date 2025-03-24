#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "Miles   Kilometers   |   Kilometers   Miles" << endl;
    
    int PRIME_LIENS = 10;
    int step1 = 1;      // 前面的步长为 2
    int step2 = 5;      // 后面的步长为 5
                        //
    int Miles = 1;
    int Kilometers = 20;

    for (int count = 0; count < PRIME_LIENS; count++){

        cout << setw(8) << left << Miles 
            << setw(10) << left << setprecision(3) << fixed << showpoint
            << Miles * 2.2;

        cout << "   |   ";

        cout << setw(13) << left << Kilometers
             << setprecision(3) << fixed << showpoint
             << Kilometers / 2.2
             << endl;

        Miles += step1;
        Kilometers += step2;
    }
    return 0;
}
