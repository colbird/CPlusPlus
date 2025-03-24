#include <iostream>
using namespace std;

int main(){
    const int START_YEAR = 10000;   // 初始学费
    const int POOL_YEAR = 10;       // 多少年后
    
    double endYear = START_YEAR;    // POOL_YEAR 后的学费
    cout << "第一年学费为 $" << START_YEAR << endl;
    for (int i = 0 ; i < 10; i++){
        endYear *= 1.05;
    }
    cout << POOL_YEAR << "年后学费为 $" << endYear << endl;
    return 0;
}
