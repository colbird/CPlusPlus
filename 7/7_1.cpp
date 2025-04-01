#include <iostream>
using namespace std;

int main(){
    const int NUMBER_OF_ELEMENTS = 10;
    double number[NUMBER_OF_ELEMENTS];
    double sum = 0;

    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++){
        cout << "Enter a new number: ";
        cin >> number[i];
        sum += number[i];
    }

    double average = sum / NUMBER_OF_ELEMENTS;

    int count = 0;
    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
        if (number[i] > average)
            count++;

    cout << "Average is " << average << endl;
    cout << "Number of elements above the average " << count << endl;

    return 0;
}
