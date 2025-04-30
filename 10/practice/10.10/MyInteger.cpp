#include "MyInteger.h"

MyInteger::MyInteger(int value){
    this -> value = value;
}

int MyInteger::getValue() const{
    return value;
}

bool MyInteger::isEven() const{
    if (value && !(value % 2))
        return true;
    return false;
}

bool MyInteger::isOdd() const{
    if (value && value % 2)
        return true;
    return false;
}

bool MyInteger::isPrime() const{
    for (int i = 2; i < value; i++){
        if(!(value % i))
            return false;
    }
    return true;
}

bool MyInteger::isEven(const int &value){
    if (value && !(value % 2))
        return true;
    return false;
}

bool MyInteger::isOdd(const int &value){
    if (value && value % 2)
        return true;
    return false;
}

bool MyInteger::isPrime(const int &value){
    for (int i = 2; i < value; i++){
        if(!(value % i))
            return false;
    }
    return true;
}

bool MyInteger::isEven(const MyInteger& interger){
    if (interger.value && !(interger.value % 2))
        return true;
    return false;
}

bool MyInteger::isOdd(const MyInteger& interger){
    if (interger.value && interger.value % 2)
        return true;
    return false;
}

bool MyInteger::isPrime(const MyInteger& interger){
    for (int i = 2; i < interger.value; i++){
        if(!(interger.value % i))
            return false;
    }
    return true;
}

bool MyInteger::equals(const int& value) const{
    if (this -> value == value){
        return true;
    }
    return false;
}

bool MyInteger::equals(const MyInteger& integer) const{
    if (value == integer.value){
        return true;
    }
    return false;
}

int MyInteger::parseInt(const string& s){
    istringstream ss(s);
    int integer;
    ss >> integer;
    return integer;
}
