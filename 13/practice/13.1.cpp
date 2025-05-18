#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    fstream  outate("Exercise13_1.txt", ios::out | ios::app);
    srand(time(0));
    for (int i = 0; i < 100; i++){
        outate << rand()%100 << " ";
    }

    outate.close();

    return 0;
}
