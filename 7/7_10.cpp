#include <iostream>
using namespace std;

int binarySearch(const int list[], int key, int listSize){
    int low = 0;
    int high = listSize - 1;

    while (high >= low){
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }
    
    return -low - 1;
}

int main(){
    int list[] = {2, 4, 7, 10,11, 45, 50, 59, 60, 66, 69, 70, 79};
    cout << binarySearch(list, 2, 13) << endl;
    cout << binarySearch(list, 11, 13) << endl;
    cout << binarySearch(list, 12, 13) << endl;
    cout << binarySearch(list, 1, 13) << endl;
    cout << binarySearch(list, 3, 13) << endl;
    return 0;
}
