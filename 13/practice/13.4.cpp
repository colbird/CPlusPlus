#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream inout("Exercise13_4.txt", ios::in);

    if (inout.fail()){
        cout << "Exercise13_1.txt: not find" << endl;
        return 0;
    }
    int arr[100];
    for (int i = 0; i < 100; i++){
        inout >> arr[i];
    }

    inout.close();

    for (int i = 0; i < 99; i++){
        for (int j = i + 1; j < 100; j++)
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }
    inout.open("Exercise13_4.txt", ios::out);
    for (int i = 0; i < 100; i++)
        inout << arr[i] << " ";

    return 0;
}
