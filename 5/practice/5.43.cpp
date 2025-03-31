#include <iostream>
#include <ctime>
using namespace std;

int main(){
    // 输入时间
    cout << "Enter the number of seconds: ";
    int numberOfSeconds;
    cin >> numberOfSeconds;
    
    int stopTime = time(0) + numberOfSeconds;
    int temp = time(0);
    while (time(0) != stopTime){
        if (temp != time(0)) {
            temp = time(0);
            cout << stopTime - temp << " seconds ramaining" << endl;
        }
    }
    cout << "Stopped" << endl;
    return 0;
}
