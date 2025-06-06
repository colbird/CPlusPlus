#include <iostream>
using namespace std;

int quotient(int number1, int number2){
    if (number2 == 0)
        throw(number1);

    return number1 / number2;
}

int main(){
    // Read two integers
    cout << "Enter two intergers: ";
    int number1, number2;
    cin >> number1 >> number2;

    try{
        int result = quotient(number1, number2);
        cout << number1 << " / " << number2 << " is "
            << result << endl;
    }
    catch(int ex){
        cout << "Exception from function: an integer " << ex << 
            " cannot be divided by zero" << endl;
    }

    cout << "Execution continues ..." << endl;

    return 0;
}
