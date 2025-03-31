#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int front = 0;
    int reverse = 0;
    for(int i = 0; i < 1000000; i++){
        if (rand()% 2)
            front++;
        else
            reverse++;
    }
    cout << front << endl;
    cout << reverse << endl;
}
