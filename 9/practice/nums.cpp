#include <cstdlib>
#include <fstream>
using namespace std;

int main(){
    ofstream output("numbers.txt");
    for(int i = 0; i < 100000; i++){
        output << rand() % 1000 << " ";
    }
    return 0;
}
