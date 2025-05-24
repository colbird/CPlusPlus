#include <iostream>
#include "StackOfIntegers.h"
using namespace std;


int main(){
    StackOfIntegers stack;
    for (int i = 0; i < 100; i++){
        stack.push(i);
    }
    cout << stack[50] << endl;

    return 0;
}
