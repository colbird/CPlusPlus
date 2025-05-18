#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string filename;
    getline(cin, filename);
    fstream input(filename, ios::in);
    if (input.fail()){
        cout << filename << "does not exist" << endl;
        return 0;
    }

    int cut = 0;
    while (!input.eof()){
        char c = input.get();
        if (input.fail()){
            cout << cut << endl;
            break;
        }
        else if(isalnum(c))
            cut++;
    }
    return 0;
}
