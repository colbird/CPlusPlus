#include <iostream>
#include <iomanip>
using namespace std;

int getPentagonalNumber(int n);

int main(){
    const int PRINT_LINE = 10;
    for (int i = 1; i <= 100; i++){
        if (i % PRINT_LINE)
            cout << setw(6) << left << getPentagonalNumber(i);
        else
            cout << setw(6) << left <<  getPentagonalNumber(i) << endl;
    }
    return  0;
}

int getPentagonalNumber(int n){
    return n*(3 * n - 1)/ 2;
}
