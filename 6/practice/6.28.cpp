#include <iostream>
using namespace std;

int getSize(int n){
    int cut = 0;
    while(n){
        n /= 10;
        cut++;
    }
    return (cut ? cut : 1);
}

int main(){
    int num = 0;
    cin >> num;
    cout << getSize(num) << endl;
}
