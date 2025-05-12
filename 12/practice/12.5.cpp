#include <iostream>
using namespace std;

template<typename T>
void swapData(T& data1, T& data2){
    T temp = data1;
    data1 = data2;
    data2 = temp;
}

int main(){
    int intData1 = 10;
    int intData2 = 100;
    double doubleData1 = 3.14;
    double doubleData2 = 1.24;
    string stringData1("du");
    string stringData2("long");

    cout << intData1 << endl;
    swapData(intData1, intData2);
    cout << intData1 << endl;
    cout << doubleData1 << endl;
    swapData(doubleData1, doubleData2);
    cout << doubleData1 << endl;
    cout << stringData1 << endl;
    swapData(stringData1, stringData2);
    cout << stringData1 << endl;
    return 0;
}
