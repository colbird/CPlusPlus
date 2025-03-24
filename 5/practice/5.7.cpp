#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    
    cout << "Degree    Sin         Cos" << endl;

    const int STEP = 10;      // 步长
    const double PI = 3.1415926;    // PI

    for (int Degree = 0; Degree <= 360; Degree += STEP){
        cout << setw(10) << left <<Degree 
             << setw(12) << left << setprecision(4)<< fixed << showpoint
             << sin(Degree * PI/180) 
             << cos(Degree * PI/180) << endl;
    }
    return 0;
}
