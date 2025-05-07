#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
    private:
        static int id;
        double balance;
        double annualInterestRate;
    public:
        Account();
        static int getId();
        double getBalance() const;
        double getAnnualInterestRate() const;
        void setId(int);
        void setBalance(double);
        void setAnnualInterestRate(double);
        double getMonthlyInterestRate() const;
        void withdraw(int);     // 取钱
        void deposit(int);      // 存钱
};

#endif
