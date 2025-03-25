#include <iostream>
using namespace std;

int main(){
    // 输入两个数
    cout << "请输入第1个数: ";
    int n1;
    cin >> n1;
    cout << "请输入第2个数: ";
    int n2;
    cin >> n2;

    int min = (n1 > n2) ? n2 : n1 ;    // 两个数中较小的数
    for (int i = min; i > 1; i--){
        if (n1 % i == 0 && n2 % i == 0){
            cout << "最大公约数: " << i << endl;
            break;
        }
    }
    if (min <= 1){
        cout << "没有最大公约数" << endl;
    }
    return 0;
}
