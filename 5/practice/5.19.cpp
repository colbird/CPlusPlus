#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "请输入打印层数(1 ~ 15)：";
    int lines;
    cin >> lines;
    lines %= 16;
    
    for (int i = 1; i <= lines; i++){   // 打印层数
        for(int j = i; j > 0; j--){
            if (j == i)
                cout << setw(10 + (lines - i) * 3) << j;
            else
                cout << setw(3) <<j;
        }
        for (int j = 2; j <= i; j++)
            cout << setw(3) << j;
        cout << endl;
    }
    return 0;
}
