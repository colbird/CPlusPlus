#include <iostream>
#include <fstream>
using namespace std;


int main(){
    fstream input("Exercise13_3.txt", ios::in);

    if (input.fail()){
        cout << "Exercise13_3.txt: cannot open" << endl;
        return 0;
    }
    int score[100];
    for (int i = 0; i < 100; i++)
        input >> score[i];
    int sum = 0;
    for (int i = 0; i < 100; i++)
        sum += score[i];
    cout << sum/100.0 << endl;
    return 0;
}
