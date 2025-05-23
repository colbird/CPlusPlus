#include <iostream>
#include <string>
using namespace std;

template<typename T>
void sort(T list[], int listSize){
    for (int i = 0; i < listSize; i++){
        T currentMin = list[i];
        int currentMinIndex = i;

        for (int j = i + 1; j < listSize; j++){
            if (currentMin  > list[j]){
                currentMin = list[j];
                currentMinIndex = j;
            }
        }

        if (currentMinIndex != i){
            list[currentMinIndex] = list[i];
            list[i] = currentMin;
        }
    }
}

template<typename T>
void printArray(const T* list, int listSize){
    for (int i = 0; i < listSize; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}
int main(){
    int list1[] = {3, 5, 1, 0, 2, 8, 7};
    sort(list1, 7);
    printArray(list1,7);

    double list2[] = {3.5, 0.5, 1.4, 0.4, 2.5, 1.8, 4.7};
    sort(list2, 7);
    printArray(list2, 7);

    string list3[] = {"Atlanta", "Denver", "Chicago", "Dallas"};
    sort(list3, 4);
    printArray(list3, 4);

    return 0;
}
