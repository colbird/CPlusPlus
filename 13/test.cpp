#include <iostream>
#include <fstream>
using namespace std;


int main(){
    fstream test("temp.txt", ios::in);
    
    char c;
        test >> c;
    while (!test.eof()){
        cout << c;
        test >> c;
    }
    test.close();
    return 0;
}
