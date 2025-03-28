#include <iostream>
using namespace std;

void displaySortedNumbers(double, double, double);

int main(){
    displaySortedNumbers(3.0, 1.0, 2.0);
    return 0;
}

void displaySortedNumbers(double num1, double num2, double num3){
    cout << (num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3)) << " ";
    cout << (num1 < num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3)) << " ";
    cout << (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3)) << endl;
}
