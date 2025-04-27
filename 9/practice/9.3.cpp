#include <iostream>
using namespace std;

class Account{
    private:
        int id;
        double balance;
        double annualInterestRate;
    public:
        Account();
        int getId() const;
        double getBalance() const;
        double getAnnualInterestRate() const;
        void setId(int);
        void setBalance(double);
        void setAnnualInterestRate(double);
        double getMonthlyInterestRate() const;
        void withdraw(int);
        void deposit(int);
};

Account::Account(){
    id = 0;
    balance = 0;
    annualInterestRate = 0;
}

int Account::getId() const{
    return id;
}

double Account::getBalance() const{
    return balance;
}

double Account::getAnnualInterestRate() const{
    return annualInterestRate;
}

void Account::setId(int id){
    this -> id = id;
}

void Account::setBalance(double balance){
    this -> balance = balance;
}

void Account::setAnnualInterestRate(double annualInterestRate){
    this -> annualInterestRate = annualInterestRate;
}

double Account::getMonthlyInterestRate() const{
    return annualInterestRate / 12;
}


void Account::withdraw(int amount){
    if (balance >= amount)
        balance -= amount;
}
void Account::deposit(int amount){
    balance += amount;
}

int main(){
    Account acc;
    acc.setId(1122);
    acc.setBalance(20000);
    acc.setAnnualInterestRate(4.5);
    acc.withdraw(2500);
    acc.deposit(3000);
    cout << acc.getBalance() << endl;
    cout << acc.getMonthlyInterestRate() << "%" << endl;
    return 0;
}
