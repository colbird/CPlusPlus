#include <iostream>
#include <iomanip>
using namespace std;

void displayPattern(int n);

int main(){
    cout << "输入n是多少: ";
    int n;
    cin >> n;
    displayPattern(n);
    return 0;
}

#include <cmath>

void displayPattern(int n){
    int w = 0;
    for (w = 0; static_cast<int>(n / pow(10, w)); w++)
        ;

    for (int i = 1; i <= n; i++){
        for (int j = i; j >= 1; j--){
            if (j == i)
                cout << setw(w + (w+1) *(n - i)) << j;
            else
                cout << setw(w + 1) << j;
        }
        cout << endl;
    }
}
