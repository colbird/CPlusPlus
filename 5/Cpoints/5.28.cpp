#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int number = 0;
    bool status;
    while (number < 20 && !status){
        number++;
        sum += number;
        if (sum >= 100)
            status = 1;
    }

    cout << "The number is " << number << endl;
    cout << "The sum is " << sum << endl;

    return 0;
}
