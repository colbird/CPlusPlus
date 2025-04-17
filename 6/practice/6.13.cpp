#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double pi(int n){
    double num1 = 0;
    for (int i = n; i >= 1; i--)
        num1 += pow(-1, i + 1)/(2 * i -1);
    return 4 *(num1);
}

int main(){
    cout << setw(16) << left << "i" << "m(i)" << endl;
    for (int i = 1; i <= 901; i++){
        if (i % 100 == 1)
            cout << setw(16) << left << i
                << setprecision(4) << fixed << pi(i) << endl;
    }
    return 0;
}
