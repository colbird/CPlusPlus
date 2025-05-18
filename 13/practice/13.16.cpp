#include <iostream>
#include <fstream>
using namespace std;

int main(){
    cout << "Enter a source file name: ";
    string sourceFileName;
    cin >> sourceFileName;

    cout << "Enter a target file name: ";
    string targetFileName;
    cin >> targetFileName;

    fstream input(sourceFileName, ios::in | ios::binary);
    if (input.fail()){
        cout << "not found " << sourceFileName << endl;
        return 0;
    }
    fstream output(targetFileName, ios::out | ios::binary);

    char c;
    while (!input.eof()){
        input.read((&c), sizeof(char));
        if(input.fail())
            break;
        output.write((&c), sizeof(char));
    }

    input.close();
    output.close();

    return 0;
}
