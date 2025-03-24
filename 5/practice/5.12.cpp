#include <iostream>
using namespace std;


int main(){

    const int LINE_NUMBER_PRINT = 10;   // 1行显示10个

    int count = 1;
    for(int i = 100; i <= 1000; i++){
        if (i % 30 == 0){
            if(count++ % 10)
                cout << i << " ";
            else
                cout << i << endl;
        }
    }
    return 0;
}
