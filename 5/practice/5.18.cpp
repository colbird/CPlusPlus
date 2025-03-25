#include <iostream>
using namespace std;

int main(){
    // 输入整数
    cout << "输入一个整数: ";
    int number;
    cin >> number;

    cout << "因数: ";

    for (int i = 1; i <= number; i++){
        if (number % i == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
