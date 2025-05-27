#include <iostream>
using namespace std;

int main(){
    // Rad two integers
    cout << "Enter two integers: ";
    int number1, number2;
    cin >> number1 >> number2;

    try{
        if (number2 == 0)
            throw number1;
        cout << number1 << " / " << number2 << " is "
            << (number1 / number2) << endl;
    }
    catch(int ex){
        cout << "Exception: an integers " << ex <<
            " cannot be divided by zero" << endl;
    }

    cout << "Exception continues ..." << endl;

    return 0;
}
