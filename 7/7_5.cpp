#include <iostream>
using namespace std;

void m(int, int []);

int main(){
    int x = 1;  // x rapresents an int value
    int y[10];  // y rapresents an array of int value
    y[0] = 1;   // INitialize y[0]

    m(x, y);

    cout << "x is " << x << endl;
    cout << "y[0] is " << y[0] << endl;

    return 0;
}

void m(int number, int numbers[]){
    number = 1001;
    numbers[0] = 5555;
}
