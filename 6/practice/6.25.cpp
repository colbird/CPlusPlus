#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


void printP(int num){
    cout << setw(13) << left << "P"
        << right << "2^p - 1" << endl;
    for(int p = 2; p <= num; ((p==2) ? p++ : p += 2)){
        cout << setw(2) << left << p
            << setw(15) << right << pow(2, p)- 1 << endl;
    }
}

int main(){
    printP(31);
    return 0;
}
