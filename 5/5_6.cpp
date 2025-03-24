#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Open a file
    ifstream input("number.txt");

    double sum = 0;
    double number;
    while(!input.eof()){
        input >> number;
        cout << number << " ";
        sum += number;
    }

    input.close();

    cout << "\nSum is " << sum << endl;

    return 0;
}
