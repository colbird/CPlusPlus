#include <iostream>
#include <fstream>
#include <cstdlib>      // rand
#include <ctime>        // time
using namespace std;

int main(){
    srand(time(0));
    ofstream number ("number.txt");

    int count = 0;
    for (int i = 0; i < 110 - 1; i++){
        count++;
        if (count %= 10)
            number << i % 99 + 1 << " ";
        else
            number << i % 99 + 1 << endl;
    }
    number << endl << 0 << endl;

    number.close();
    return 0;
}
