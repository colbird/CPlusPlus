#include <iostream>
#include <string>
#include <sstream>
using namespace  std;

void strmonny(const string& monny){
    string frontMonny("0");
    int fMonny = 0;
    string behindMonny("0");
    int bMonny = 0;

    int dotPosition = monny.find('.');
    if (dotPosition != string::npos){
        frontMonny = monny.substr(0,dotPosition);
        if (monny.size()- 1 - dotPosition){
            behindMonny = monny.substr(dotPosition + 1, 2);
        }
        else{
            frontMonny = monny;
        }
    }

    stringstream Monny1(frontMonny);     // 美元部分
    int numberOfOneDollars = 0;
    Monny1 >> numberOfOneDollars;

    stringstream Monny2(behindMonny);
    int remainingAmount = 0;
    Monny2 >> remainingAmount;

    int numberOfQuarters = 0;
    int numberOfDimes = 0;
    int numberOfNickels = 0;
    int numberOfPennies = 0;
    if (remainingAmount){
        numberOfQuarters = remainingAmount / 25;
        remainingAmount %= 25;
        numberOfDimes = remainingAmount / 10;
        remainingAmount %= 10;
        numberOfNickels = remainingAmount / 5;
        remainingAmount %= 5;
        numberOfPennies = remainingAmount;
    }
    if (numberOfOneDollars)
        cout << numberOfOneDollars << "dollars" << endl;
    if (numberOfQuarters)
        cout << numberOfQuarters << "quarters" << endl;
    if (numberOfDimes)
        cout << numberOfDimes << "dimes" << endl;
    if (numberOfNickels)
        cout << numberOfNickels << "nickels" << endl;
    if (numberOfPennies)
        cout << numberOfPennies << "pennies" << endl;
}

int main(){
    string monny1;
    cin >> monny1;
    strmonny(monny1);

    return 0;
}
