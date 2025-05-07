#include <iostream>
using namespace std;


int main(){
    int numbers[7] = {1, 2, 4, 5, 100, 2, -22};
    int* min = numbers;
    for (int i = 1; i < 7; i ++){
        if (*min > numbers[i])
            min = numbers+i;
    }
    cout << *min << endl;
    return 0;
}
