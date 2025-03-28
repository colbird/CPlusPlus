#include <iostream>
using namespace std;

int sumDigits(long n){
    int sum = 0;
    for (sum = 0; n > 0 ; n /= 10)
        sum += n % 10;
    return sum;
}

int main(){
    cout << "请输入一个整数: ";
    long num;
    cin >> num;

    cout << sumDigits(num) << endl;

    return 0;
}
