#include <iostream>
#include "Vector.h"
using namespace std;

int main(){
    Vector<int> test;
    for (int i = 0; i < 100; i++)
        test.push_back(i);
    cout << test.limit() << "\n" << test.size() << endl;
    for (int i = 0; i < 50; i++)
        test.pop_back();
    cout << test.limit() << "\n" << test.size() << endl;

    Vector<int> test1;
    for (int i = 0; i < 5; i++){
        test1.push_back(i);
    }

    cout << test1.limit() << "\n" << test1.size() << endl;
    test1.swap(test);
    cout << test.limit() << "\n" << test.size() << endl;
    cout << test1.limit() << "\n" << test1.size() << endl;

    return 0;
}
