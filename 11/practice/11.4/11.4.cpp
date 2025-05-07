#include <iostream>
using namespace std;

int average(const int* list, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += list[i];
    }
    return sum / 10;
}

double average(const double* list, int size){
    double sum = 0;
    for (int i = 0; i < size; i++){
        sum += list[i];
    }
    return sum / 10;
}

int main(){
    double list[10];
    for (int i = 0; i < 10; i++){
        cin >> list[i];
    }
    cout << average(list, 10) << endl;

    return 0;
}
