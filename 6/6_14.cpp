#include <iostream>
using namespace std;

// Attempt to swap two variables does not work;
void swap(int n1, int n2){
    cout << "\tInside the swap function" << endl;
    cout << "\tBefore swapping n1 is " << n1 <<
    " n2 is " << n2 << endl;

    // Swap n1 with n2
    int temp = n1;
    n1 = n2;
    n2 = temp;

    cout <<  "\tAfter seapping n1 is " << n1 <<
    " n2 is " << n2 << endl;
}

int main(){
    // Declare and initialize variables
    int num1 = 1;
    int num2 = 2;

    cout << "Before invoking the swap function, num1 is "
    << num1 << " and num2 is " << num2 << endl;

    swap(num1, num2);

    cout <<  "After seapping n1 is " << num1 <<
    " n2 is " << num2 << endl;
    return 0;
}
