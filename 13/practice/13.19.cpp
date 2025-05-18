#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int encrypt[3] = {5, 2, 0};

    string encryptFileName;
    cin >> encryptFileName;
    string outFileName;
    cin >> outFileName;
    fstream input(encryptFileName, ios::in | ios::binary);
    if(input.fail()){
        cout << "not found " << encryptFileName << endl;
        return 0;
    }
    fstream output(outFileName, ios::out | ios::binary);
    
    int cut = 0;
    while(!input.eof()){
        char c;
        input.read((&c), sizeof(char));
        if (input.fail())
            break;
        c += encrypt[cut % 3];
        cut++;
        output.write((&c), sizeof(char));
    }

    input.close();
    output.close();
    
    return 0;
}
