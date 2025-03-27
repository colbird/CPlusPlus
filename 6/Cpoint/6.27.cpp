#include <iostream>
using namespace std;

void p(int& i){             // 这两个函数的函数标签一样，引用变量实际上是另一个变量的别名
    cout << i << endl;
}

void p(int j){
    cout << j << endl;
}

int main(){
    int k = 5;
    p(k);

    return 0;
}
