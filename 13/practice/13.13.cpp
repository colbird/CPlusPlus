#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    fstream binaryio("Exercise13_13.dat", ios::app | ios::binary);
    srand(time(0));
    
    for (int i = 0; i < 100; i++){
        int temp = rand();
        binaryio.write(reinterpret_cast<char*>(&temp), sizeof(int));
    }
    return 0;
}
