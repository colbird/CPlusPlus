#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 6; i++){
        for(int j = i; j; j--)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}
