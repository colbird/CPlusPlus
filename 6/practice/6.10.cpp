#include <iostream>
#include <iomanip>
using namespace std;

double computeCommission(double salesAmount){
    if (salesAmount > 10000)
        return 5000 * 0.08 + 5000 * 0.1 + (salesAmount - 10000) * 0.12;
    else
        return 5000 * 0.08 + 5000 * 0.1;
}

int main(){
    cout << setw(16) << left
        << "Sales Amount" << "Commission" << endl;
    for (int i = 10000; i <= 100000; i += 5000){
        cout << setw(16) << left
        << i 
        << setprecision(1) <<fixed<< computeCommission(i) << endl;
    }
    return 0;
}
