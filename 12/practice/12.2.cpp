#include <iostream>
using namespace std;

const int MAX = 4;

template<typename T>
int find(const T* list, const T& data, const int& size){     // 成功找到返回下标，失败返回-1
    for (int i = 0; i < size; i++)
        if (list[i] == data)
            return i;
    return -1;
}

int main(){
    
    int arr1[MAX] = {1,2,3,4};
    double arr2[MAX] = {1.1,2.2,3.3,4.4};
    string arr3[MAX] = {"cheng","du","wang","xv"};

    cout << find(arr1, 1, MAX) << endl;
    cout << find(arr2, 3.3, MAX) << endl;
    cout << find(arr3, string("du"), MAX) << endl;

    return 0;
}
