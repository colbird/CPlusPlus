#include <iostream>
using namespace std;

int reverse(int number);

int main(){
    cout << "输入一个整数: ";
    int number;
    cin >> number;
    number = reverse(number);
    cout << number << endl;
    return 0;
}
int reverse(int number){
    int rever = 0;
    for (rever = 0; number > 0; number /= 10){
        rever *= 10;
        rever += (number % 10);
    }
    return rever;
}
