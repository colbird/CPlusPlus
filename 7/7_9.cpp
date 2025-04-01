#include <iostream>
using namespace std;


int linearSearch(const int list[], int key, int arraySize){
    for (int i = 0; i < arraySize; i++){
        if (key == list[i])
            return i;
    }
    return -1;
}

int main(){
    int list[] = {1, 4, 4, 2, 5, -3, 6, 2};
    cout << linearSearch(list, 4, 8) << endl;
    cout << linearSearch(list, -4, 8) << endl;
    cout << linearSearch(list, -3, 8) << endl;
    return 0;
}
