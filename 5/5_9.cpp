#include <iostream>
using namespace std;

int main(){
    // Initalize sum
    double sum = 0;

    // Add 0.01, 0.02, ..., 0.99. 1 to sum
    double currentValue = 0.01;
    for (int count = 0; count < 100; count++){
        sum += currentValue;
        currentValue += 0.01;
        cout << "The sum is " << sum << endl;
    }

    return 0;
}
