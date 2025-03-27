#include <iostream>
using namespace std;

void minMax(double a, double b, double& min, double& max){    // 错误：min 和 max 用的是形式参数
    if(a < b){  // 6, 7, 10, 11 作用域不在函数里
        double min = a;    
        double max = b;
    }
    else {
        double max = a;
        double min = b;
    }
}

int main(){
    double a = 5, b = 6 , min, max;
    minMax(a, b, min, max);

    cout << "min is "  << min << " and max is " << max << endl;
    
    return 0;
}
