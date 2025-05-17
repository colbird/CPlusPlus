#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // Opne a file
    ifstream input("state.txt");

    if (input.fail()){
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
    }

    // Read data
    string city;
    while(!input.eof()){
        getline(input, city, '#');
        if (input.fail())
            break;
        cout << city << endl;
    }

    input.close();

    cout << "Done" << endl;

    return 0;
}
