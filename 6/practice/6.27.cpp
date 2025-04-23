#include <iostream>
using namespace std;

double babilunSprt(int num){
    double lastGuess = 1;
    double nextGuess = 0;
    while(1){
        nextGuess = (lastGuess +(static_cast<double>(num)/ lastGuess))/ 2;
        if (nextGuess - lastGuess < 0.0001 && nextGuess - lastGuess > -0.0001){
            return nextGuess;
        }
        else {
            lastGuess = nextGuess;
        }
    }
}

int main(){
    int num;
    cin >> num;
    cout << babilunSprt(num) << endl;
    return 0;
}
