#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int LINES = 8;
    
    for (int i = 0; i < LINES; i++){   // 打印层数
        for (int j = 0; j <= i; j++){
            if (j == 0)
                cout << setw((LINES - i)*4) << 1;
            else
                cout << setw(4) << (1<<(j));
        }
        for (int j = i-1; j >= 0 ; j--)
                cout << setw(4) << (1<<(j));
        cout << endl;
    }
    return 0;
}
