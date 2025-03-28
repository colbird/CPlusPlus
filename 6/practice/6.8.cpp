#include <iostream>
#include <iomanip>
using namespace std;

double feetToMeter(double feet);
double meterToFeet(double meter);

int main(){
    const int feetSlep = 1;
    const int meterSlep = 5;
    // Tital
    cout << "Feet      Meters"
         << "    |    "
         << "Meters    Feet" << endl;;
    for (int i = 1;i <= 10; i++){

        cout << setw(10) << left << setprecision(1)<< showpoint << fixed
        << static_cast<double>(i * feetSlep);
        
        cout << setw(6) << left << setprecision(3) << showpoint << fixed
        << feetToMeter(i * feetSlep);

        cout << "    |    ";

        cout << setw(10) << left << setprecision(1)<< showpoint << fixed
        << static_cast<double>(i * meterSlep + 15);

        cout << setprecision(3) << showpoint << fixed 
        << meterToFeet(i * meterSlep + 15);

        cout << endl;
    }
    return 0;
}

double feetToMeter(double feet){
    return 0.305 * feet;
}
double meterToFeet(double meter){
    return meter / 0.305;
}
