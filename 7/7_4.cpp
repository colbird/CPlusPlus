#include <iostream>
using namespace std;

void printArray(int list[], int arraySize);

int main(){
    int numbers[5] = {1, 4, 3, 6, 8};
    printArray(numbers, 5);

    return 0;
}

void printArray(int list[], int arraySize){
    for (int i = 0; i < arraySize; i++){
        cout << list[i] << " ";
    }
}
