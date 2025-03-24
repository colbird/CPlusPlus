#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    const int START_YEAR = 10000;   // 初始学费
    const int POOL_YEAR = 10;       // 多少年后
    
    double endYear = START_YEAR;    // POOL_YEAR 后的学费
    cout << "第1年学费为 $" << START_YEAR << endl;
    for (int i = 0 ; i < 10; i++){
        double temp = endYear;
        double total = 0;
        for (int j = 0;j < 4; j++){
            temp *= 1.05;
            total += temp;
        }
        cout << "第" << setw (2) << left << i+1 << "未来的4年的总学费$ " << total << endl;
        endYear *= 1.05;
    }
    return 0;
}
