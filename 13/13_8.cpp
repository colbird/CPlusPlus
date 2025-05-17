#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream inout;

    // Create a file
    inout.open("city.txt", ios::out);

    // write cities
    inout << "dallas" << " " << "Houston" << " " << "Atlanta" << " ";

    inout.close();

    // Append to the file
    inout.open("city.txt", ios::app);
    
    inout << "Savannah" << " " << "Austin" << " " << "Chicago";

    inout.close();

    string city;

    // Open the file
    inout.open("city.txt", ios::in);
    while (!inout.eof()){
        inout >> city;
        if (inout.fail())
            break;
        cout << city << " ";

    }
    
    inout.close();
    
    return 0;

}
