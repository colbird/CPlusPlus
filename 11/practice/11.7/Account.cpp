#include "Account.h"

int Account::id = 0;

Account::Account(){
    id++;
    balance = 100;
    annualInterestRate = 0;
}

int Account::getId(){
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
