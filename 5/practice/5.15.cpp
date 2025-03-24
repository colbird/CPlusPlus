#include <iostream>
using namespace std;

int main(){
    int n = 0;

    while (n * n * n < 12000){
        n++;
    }
    cout << "平方值小于12000的最大整数" << n - 1 << endl;
    return 0;
}
