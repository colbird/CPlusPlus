#include "Rational.h"
#include <sstream>  // Used in toString to convert numbers to strings
#include <cstdlib>  // For the abs function

Rational::Rational(){
    numerator = 0;
    denominator = 1;
}

Rational::Rational(int numerator){
    this -> numerator = numerator;
    this -> denominator = 1;
}

Rational::Rational(int numerator, int denominator){
    int factor = gcd(numerator, denominator);
    this -> numerator = ((denominator > 0) ? 1 : -1)* numerator / factor;
    this -> denominator = abs(denominator) / factor;
}

int Rational::getNumberator() const{
    return numerator;
}

int Rational::getDenominator() const{
    return denominator;
}

// Find GCD of  two numbers
int Rational::gcd(int n, int d){
    int n1 = abs(n);
    int n2 = abs(d);
    int gcd = 1;

    for (int k = 1; k <= n1 && k <= n2; k++){
        if (n1 % k == 0 && n2 % k ==0)
            gcd = k;
    }
    return gcd;
}

Rational Rational::add(const Rational& secondRational) const{
    int n = numerator * secondRational.getDenominator() +
        denominator * secondRational.getNumberator();
    int d = denominator * secondRational.getDenominator();
    return Rational(n, d);
}

Rational Rational::subtract(const Rational& secondRational) const{
    int n = numerator * secondRational.getDenominator()
        - denominator * secondRational.getNumberator();
    int d = denominator * secondRational.getDenominator();
    return Rational(n, d);
}

Rational Rational::multiply(const Rational& secondRational) const{
    int n = numerator * secondRational.getNumberator();
    int d = denominator * secondRational.getDenominator();
    return Rational(n, d);
}

Rational Rational::divide(const Rational& secondRational) const{
    int n = numerator * secondRational.getDenominator();
    int d = denominator * secondRational.getNumberator();
    return Rational(n, d);
}

int Rational::compareTo(const Rational& secondRational) const{
    Rational temp = subtract(secondRational);
    if (temp.getNumberator() < 0)
        return -1;
    else if (temp.getNumberator() == 0)
        return 0;
    else
        return 1;
}

bool Rational::equals(const Rational& secondRational) const{
    if (compareTo(secondRational) == 0)
        return true;
    else
        return false;
}

int Rational::intValue() const{
    return getNumberator() / getDenominator();
}

double Rational::doubleValue() const{
    return 1.0 * getNumberator() / getDenominator();
}

string Rational::toString() const{
    stringstream ss;
    ss << numerator;

    if (denominator > 1)
        ss << "/" << denominator;

    return ss.str();
}

bool Rational::operator<(const Rational& secondRational) const{
    if (compareTo(secondRational) < 0)
        return true;
    else
        return false;
}
Rational Rational::operator+(const Rational& secondRational) const{
    return add(secondRational);
}

int& Rational::operator[](int index){
    if (index == 0)
        return numerator;
    else
        return denominator;
}

Rational& Rational::operator+=(const Rational& secondRational){
    *this = add(secondRational);
    return *this;
}

Rational Rational::operator-(){
    return Rational(-numerator, denominator);
}

Rational& Rational::operator++(){
    numerator += denominator;
    return *this;
}

Rational Rational::operator++(int dummy){
    Rational temp(numerator, denominator);
    numerator += denominator;
    return temp;
}

ostream& operator<<(ostream& out, const Rational& rational){
    out << rational.numerator << "/" << rational.denominator;
    return out;
}

istream& operator>>(istream& in, Rational& rational){
    cout << "Enter numerator: ";
    in >> rational.numerator;

    cout << "Enter numerator: ";
    in >> rational.denominator;
    return in;
}

/*
Rational::operator double(){
    return doubleValue();
}
*/
