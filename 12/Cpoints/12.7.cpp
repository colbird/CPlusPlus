#include <iostream>
#include <string>
using namespace std;

template<typename T1, typename T2>
T1 maxValue(T1 value1, T2 value2){
    if (value1 > value2)
        return value1;
    else
        return value2;
}

int main(){
    cout << maxValue(1, 2.5) << endl;
    cout << maxValue(1.4, 2.5) << endl;
    cout << maxValue(1.5, 2) << endl;
    return 0;
}
