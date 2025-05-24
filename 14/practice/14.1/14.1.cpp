#include <iostream>
#include "RationalWithOperators.h"
using namespace std;

int main(){
    Rational sum;
    for (int i = 99; i > 0; i--){
        sum += Rational(i, i + 1);
        cout << Rational(i, i + 1) << endl;
    }
    cout << sum << endl;
    return 0;
}
