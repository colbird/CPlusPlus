#include <iostream>
using namespace std;

int *doubleCapacity(const int* list, int size){
    int* newList = new int[size*2];
    for (int i = 0; i < size; i++){
        newList[i] = list[i];
    }
    return newList;
}

int main(){
    int list[10] = {1,2,3,4,5,6,7,8,9};
    int* newList = doubleCapacity(list, 10);
    for (int i = 0; i < 10; i++){
        cout << list[i] << endl;
    }
    for (int i = 0; i < 20; i++){
        cout << newList[i] << endl;
    }

    return 0;
}
