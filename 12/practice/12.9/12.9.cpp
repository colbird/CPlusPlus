#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
    Stack<int> stack;

    for(int i = 0; i < 10; i++){
        stack.push(i);
    }

    cout << "size = " << stack.getSize() << endl;
    cout << "peek = " << stack.peek() << endl;
    for(int i = 0; i < 10; i++){
         cout << stack.pop() << " ";
    }
    cout << endl;
    return 0;
}
