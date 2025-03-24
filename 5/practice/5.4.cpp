#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "Miles\tKilometers" << endl;

    for (int miles = 1; miles <= 10; miles++){
        cout << setw(8)<< left <<miles 
             << setprecision(3) << showpoint << fixed
             << static_cast<double>(miles * 1.609) << endl;
    }

    return 0;
}
