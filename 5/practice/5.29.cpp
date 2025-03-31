#include <iostream>
using namespace std;
int main(){
    const int PRINT_LINE = 10;
    int count = 0;
    for (int i = 2001; i <= 2100; i++){
        if((i % 4 == 0 || i % 100 == 0 ) && i % 400){
            count++;
            if (count % 10)
                cout << " " << i;
            else
                cout << " " << i << endl;
        }
    }
    return 0;
}
