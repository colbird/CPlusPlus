#include <iostream>
#include "Rational.h"
using namespace std;

int main(){
    Rational r1(2, 3);
    Rational r = r1 + 4;
    cout << r << endl;

    return 0;
}
