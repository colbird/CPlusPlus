#include <iostream>
using namespace std;

// Swap two variables using pass-by-value
void swap1(int n1, int n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

// Swap two variables using pass-by-raference
void swap2(int& n1, int& n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

// pass two pointers by value
void swap3(int* n1, int* n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

// Pass two pointers by reference
void swap4(int* &n1, int* &n2){
    int* temp = n1;
    n1 = n2;
    n2 = temp;
}

int main(){
    // Declare and inittalize variables
    int num1 = 1;
    int num2 = 2;

    cout << "Before invoking the swap function, num1 is "
        << num1 << " and num2 is " << num2 << endl;

    // Invoke the swap function to attempt to swap two variables
    swap1(num1, num2);

    cout << "After invoking the swap function, num1 is " << num1 <<
        " and num2 is " << num2 << endl;

    cout << "Before invoking the swap function, num1 is "
        << num1 << " and num2 is " << num2 << endl;

    // Invoke the swap function to attempt to swap two variables
    swap2(num1, num2);

    cout << "After invoking the swap function, num1 is " << num1 <<
        " and num2 is " << num2 << endl;

    cout << "Before invoking the swap function, num1 is "
        << num1 << " and num2 is " << num2 << endl;

    // Invoke the swap function to attempt to swap two variables
    swap3(&num1, &num2);

    cout << "After invoking the swap function, num1 is " << num1 <<
        " and num2 is " << num2 << endl;

    int* p1 = &num1;
    int* p2 = &num2;
    cout << "Before invoking the swap function, p1 is "
        << p1 << " and p2 is " << p2 << endl;

    // Invoke the swap function to attempt ot swap two variables
    swap(p1, p2);
    
    cout << "After invoking the swap function, p1 is " << p1 << 
        " and p2 is " << p2 << endl;

    return 0;
}
