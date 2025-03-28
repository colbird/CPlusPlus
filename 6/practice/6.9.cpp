#include <iostream>
#include <iomanip>
using namespace std;

// Convert form Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius);

// Convert form Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit);

int main(){
    const double START_CELSIUS = 40.0;
    const double START_FAHRENHEIT = 120.0;
    const int CELSIUS_SLEP = 1;
    const int FAHRENHEIT_SLEP = 10;

    // tital
    cout << "Celsius      Fahrenheit   |   Fahrenheit     Celsius" << endl;
    for (int i = 0; i < 10; i++){
        cout << setw(13) << left << setprecision(1) << fixed
        << START_CELSIUS - i * CELSIUS_SLEP;
        cout << setw(10) << left
        << celsiusToFahrenheit(START_CELSIUS - i * CELSIUS_SLEP);

        cout << "   |   ";

        cout << setw(15) << left
        << START_FAHRENHEIT - i * FAHRENHEIT_SLEP;
        cout << setprecision(2) << fixed
        <<  fahrenheitToCelsius(START_FAHRENHEIT - i * FAHRENHEIT_SLEP);

        cout << endl;
    }

    return 0;
}

double celsiusToFahrenheit(double celsius){
    return (9.0 / 5) * celsius + 32;
}

double fahrenheitToCelsius(double fahrenheit){
    return (5.0 / 9) * (fahrenheit - 32);
}
