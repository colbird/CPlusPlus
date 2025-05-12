#include <iostream>
using namespace std;

const int MAX = 4;

template<typename T>
bool isSotred(const T list[], const int& size){
    for (int i = 0; i < size - 1; i++){
       if (list[i] > list[i + 1]){
           return false;
       }
    }
    return true;
}

int main(){
    
    int arr1[MAX] = {1,2,3,4};
    double arr2[MAX] = {1.1,2.2,3.3,4.4};
    string arr3[MAX] = {"cheng","du","wang","xv"};
    string arr4[MAX] = {"cheng","du","xv","wang"};

    cout << isSotred(arr1, MAX) << endl;
    cout << isSotred(arr2, MAX) << endl;
    cout << isSotred(arr3, MAX) << endl;
    cout << isSotred(arr4, MAX) << endl;

    return 0;
}
