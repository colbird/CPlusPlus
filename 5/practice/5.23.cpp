#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    const double START_INTEREST_RATE = 5.0;
    const double SLEP = 0.125;
    // 输入
    cout << "Loan Amount: ";
    double loanAmount;
    cin >> loanAmount;

    cout << "Number of Years: ";
    double numberOfYears;
    cin >> numberOfYears;

    

    // 打印标题
    cout << "Interest Rate   Monthly Payment   Total Payment" << endl;
    for(int i = 0; i <= 24; i++){
        // 月利率
        double monthlyInteresRate = (START_INTEREST_RATE + i * SLEP)/ 1200;
        double monthlyPayment = loanAmount * monthlyInteresRate /
        (1 - 1 / pow(1+monthlyInteresRate, numberOfYears * 12));

        cout << setprecision(3) << showpoint << fixed
        << START_INTEREST_RATE + i * SLEP;
        cout << setw(11) << left << "%";

        cout << setw(18) << setprecision(2) << showpoint << fixed
        << monthlyPayment;

        cout << monthlyPayment * numberOfYears * 12;

        cout << endl;
    }
    return 0;
}
