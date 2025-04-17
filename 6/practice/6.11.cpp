#include <iostream>
using namespace std;

void printChars(char ch1, char ch2, int numberPerLine){
    for (int count = 0, i = ch1; i <= ch2; i++){
        cout << static_cast<char>(i) << " ";
        count++;
        if (count % 10 == 0)
            cout << endl;
    }
}

int main(){
    printChars('A', 'z', 10);
    return 0;
}
