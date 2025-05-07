#include <iostream>
using namespace std;

int main(){
    int pos = 0;            // 数组的位置
    int size;               // 数组的大小
    cin >> size;
    double* numbers = new double[size];
    for (int i = 0; i < size; i++){
        double num;
        cin >> num;
        int j = 0;
        for (j = 0; j < pos; j++){
            if (numbers[j] == num)
                break;
        }
        if (j == pos){
            numbers[pos++] = num;
        }
    }
    
    for (int i = 0; i < pos; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    delete [] numbers;
    return 0;
}
