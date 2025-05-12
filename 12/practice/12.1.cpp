#include <iostream>
using namespace std;

const int MAX = 4;

template<typename T>
T max(const T* list, const int& size){
    T max = list[0];
    for (int i = 0; i < size; i++)
        if (max < list[i])
            max = list[i];
    return max;
}

int main(){
    int arr1[MAX] = {1,2,3,4};
    double arr2[MAX] = {1.1,2.2,3.3,4.4};
    string arr3[MAX] = {"cheng","du","wang","xv"};

    cout << max(arr1, MAX) << endl;
    cout << max(arr2, MAX) << endl;
    cout << max(arr3, MAX) << endl;

    return 0;
}
