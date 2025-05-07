#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "输入数组大小: ";
    cin >> size;

    double* numbers = new double[size];
    for (int i = 0; i < size; i++){
        double num;
        cin >> num;
        numbers[i] = num;
    }
    double mean = 0;
    for (int i = 0; i < size; i++)
        mean += numbers[i];
    mean /= size;

    int cut = 0;
    for (int i = 0; i < size; i++){
        if (numbers[i] > mean)
            cut++;
    }
    cout << "在均值以上: " <<cut << endl;
    return 0;
}
