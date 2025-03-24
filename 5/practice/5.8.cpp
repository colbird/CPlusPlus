#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    cout << "Number      SquareRoot" << endl;

    const int PRINT_LINES = 20;     // 打印的行数
    const int STEP = 2;

    for(int number = 0; number <= PRINT_LINES; number += STEP){
        cout << setw(10) << left << number
             << setprecision(4) << fixed << showpoint
             << sqrt(number) << endl;
    }
    return 0;
}
