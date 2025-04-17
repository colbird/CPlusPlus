#include <iostream>
#include <iomanip>
using namespace std;

double series(int num){
    double m = 0;
    for (int i = 1; i <= num; i++){
        m += (static_cast<double>(i) / (i+1));
    }
    return m;
}

int main(){
    // 打印标题
    cout << setw(16) << left << "i" << "m(i)" << endl;
    for (int i = 0; i <= 20; i++){
        cout << setw(16) << left << i
            << setprecision(4) << fixed << series(i) << endl;
    }
    return 0;
}
