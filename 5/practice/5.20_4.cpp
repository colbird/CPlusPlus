#include <iostream>
using namespace std;

int main(){

    for(int i = 6; i ; i--){
        for(int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}
