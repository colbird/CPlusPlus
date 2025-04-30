#include <iostream>
#include "MyInteger.h"
using namespace std;

int main(){
    string str;
    cin >> str;
    MyInteger integer(MyInteger::parseInt(str));
    cout << "str = " << str << endl;
    cout << "integer = " << integer.getValue() << endl;

    cout << "integer isEven: " << integer.isEven() << endl;
    cout << "integer isOdd: " << integer.isOdd() << endl;
    cout << "integer isPrime: " << integer.isPrime() << endl;

    cout << "str isEven: " << MyInteger::isEven(MyInteger::parseInt(str)) << endl;
    cout << "str isOdd: " <<  MyInteger::isOdd(MyInteger::parseInt(str)) << endl;
    cout << "str isPrime: " << MyInteger::isPrime(MyInteger::parseInt(str)) << endl;

    cout << "str isEven: " << MyInteger::isEven(integer) << endl;
    cout << "str isOdd: " <<  MyInteger::isOdd(integer) << endl;
    cout << "str isPrime: " << MyInteger::isPrime(integer) << endl;
    return 0;
}
