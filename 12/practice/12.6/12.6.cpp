#include <iostream>
#include "GenericStack.h"


using namespace std;

int main(){
    Stack<int> stack;

    for (int i = 0; i < 10; i++)
        stack.push(i);

    stack.printStack();

    return 0;
}
