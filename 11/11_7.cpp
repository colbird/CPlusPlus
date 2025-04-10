#include <iostream>
#include <algorithm>
// #include <random>
using namespace std;

void printArray(const int* list, int size){
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
    cout << endl;
}

int main(){
    int list[] = {4, 2, 3, 6, 5, 1};
    printArray(list, 6);
    
    int* min = min_element(list, list + 6);
    int* max = max_element(list, list + 6);
    cout << "The min value is " << *min << "at index "
        << (min - list) << endl;
    cout << "The max - list is " << *max << "at index "
        << (max - list) << endl;

     random_shuffle(list, list + 6);
    // random_shuffle
    // C++14 中已弃用，并在 C++17 中完全删除
    // unsigned seed = time(0);
    // shuffle(list, list + 6, default_random_engine(seed));

    printArray(list, 6);

    sort(list, list + 6);
    printArray(list, 6);
    
    int key = 4;
    int* p = find(list, list + 6, key);
    if (p != list + 6)
        cout << "The value " << *p << " is found at position "
            << (p - list) << endl;
    else
        cout << "The value " << *p << " is not found" << endl;

    return 0;
}
