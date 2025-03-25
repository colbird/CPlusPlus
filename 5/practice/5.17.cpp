#include <iostream>
using namespace std;

int main(){
    const int LINE_PRINT = 10;

    for(int i = 33, count = 1; i <= 126; i++, count++){
        if(count % LINE_PRINT)
            cout << static_cast<char>(i) << " ";
        else
            cout << static_cast<char>(i) << endl;
    }
    cout << endl;
    return 0;
}
