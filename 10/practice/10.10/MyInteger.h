#ifndef MYINTEGER_H
#define MYINTEGER_H
#include <string>
#include <sstream>
using namespace std;

class MyInteger{
    private:
        int value;
    public:
        MyInteger(int);
        int getValue() const;
        bool isEven() const;
        bool isOdd() const;
        bool isPrime() const;
        static bool isEven(const int&);
        static bool isOdd(const int&);
        static bool isPrime(const int&);
        static bool isEven(const MyInteger&);
        static bool isOdd(const MyInteger&);
        static bool isPrime(const MyInteger&);
        bool equals(const int&) const;
        bool equals(const MyInteger& ) const;
        static int parseInt(const string&);
};

#endif
