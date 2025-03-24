#include <iostream>
using namespace std;

int main(){
    int n = 0;

    while (n * n <= 12000){
        n++;
    }
    cout << "平方值大于12000的最小整数" << n << endl;
    return 0;
}
