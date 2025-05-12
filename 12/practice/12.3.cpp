#include <iostream>
using namespace std;

const int MAX = 4;

template<typename T>
int binMidfind(const T* list, const T& data, const int& size){
    int left = 0;
    int right = size - 1;
    int middle = (left + right)/ 2;
    while (left <= right){
        if (list[middle] > data){
            right = middle - 1;
            middle = (left + right)/ 2;
        }
        else if (list[middle] < data){
            left = middle + 1;
            middle = (left + right)/ 2;
        }
        else
            return middle;
    }
    return  -1;
}

int main(){
    int arr1[MAX] = {1,2,3,4};
    double arr2[MAX] = {1.1,2.2,3.3,4.4};
    string arr3[MAX] = {"cheng","du","wang","xv"};

    cout << binMidfind(arr1, 3, MAX) << endl;
    cout << binMidfind(arr2, 2.2,MAX) << endl;
    cout << binMidfind(arr3, string("xv"),MAX) << endl;

    return 0;
}
