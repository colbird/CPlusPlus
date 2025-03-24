#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "Kilograms   Pounds   |   Pounds   Kilograms" << endl;
    
    int PRIME_LIENS = 100;
    int step1 = 2;      // Kilograms的步长为 2
    int step2 = 5;      // Pounds的步长为 5
                        //
    int Kilograms = 1;
    int Pounds = 20;

    for (int count = 0; count < PRIME_LIENS; count++){

        cout << setw(12) << left << Kilograms 
            << setw(6) << left << setprecision(1) << fixed << showpoint
            << Kilograms * 2.2;

        cout << "   |   ";

        cout << setw(9) << left << Pounds
             << setprecision(2) << fixed << showpoint
             << Pounds / 2.2
             << endl;
        Kilograms += step1;
        Pounds += step2;
    }
    return 0;
}
