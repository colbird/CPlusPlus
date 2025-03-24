#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "Kilograms\tPounds" << endl;

    for (int Kilograms = 1; Kilograms < 200; Kilograms++){
        cout << setw(16) << left <<Kilograms
             << static_cast<double>(Kilograms * 2.2) << endl;
    }

    return 0;
}
