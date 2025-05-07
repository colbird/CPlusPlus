#include <iostream>
#include <iomanip>
#include "Account.h"
using namespace std;

void printMainMenu(){
    cout << "\nMain menu" << endl;
    cout << "1: check balance" << endl;
    cout << "2: withdraw" << endl;
    cout << "3: deposit" << endl;
    cout << "4: exit" << endl;
    cout << "Enter a choice: ";
}

void ATM(const int& id, Account* users){
    int num = 0;
    int monny = 0;
    while (1){
        printMainMenu();
        cin >> num;
        switch(num){
            case 1:
                cout << "The balance is " << fixed << setprecision(1) <<
                    users[id].getBalance() << endl;
                break;
            case 2:
                cout << "Enter an amount to withdraw: ";
                cin >> monny;
                users[id].withdraw(monny);
                break;
            case 3:
                cout << "Enter an amount to deposit: ";
                cin >> monny;
                users[id].deposit(monny);
                break;
            case 4:
                return;
                break;
            default:
                break;
        }
    }
}

int main(){
    Account* users = new Account[10];
    while (1){
        cout << "Enter an id: ";
        int id;
        cin >> id;
        if (id < 0 || id > 9){
            cout << "agin" << endl;
            continue;
        }
        ATM(id, users);
    }
    return 0;
}
