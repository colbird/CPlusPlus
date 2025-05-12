#include <iostream>
#include "GenericStack.h"

using namespace std;



int main(){
    Stack<int> intStack;
    for (int i = 0; i < 10; i++){
        intStack.push(i);
    }
    cout << intStack.contains(1) << endl;
    cout << intStack.contains(10) << endl;
    return 0;
}
