#include <iostream>
#include "ImprovedStack.h"
using namespace std;

int main(){
    Stack<int> stack;
    for (int i = 0; i < 100; i++)
        stack.push(i);
    while(!stack.empty())
        cout << stack.pop() << " ";
    cout << endl;
    return 0;
}
