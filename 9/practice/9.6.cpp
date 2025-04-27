#include <iostream>
#include <cmath>
using namespace std;

class Quadraic_Equation{
    private:
        double a;
        double b;
        double c;
    public:
        Quadraic_Equation(double, double, double);
        double getA() const;
        double getB() const;
        double getC() const;
        double getDisciriminant() const;
        double getRoot1() const;
        double getRoot2() const;
};

Quadraic_Equation::Quadraic_Equation(double a, double b, double c){
    this -> a = a;
    this -> b = b;
    this -> c = c;
}

double Quadraic_Equation::getA() const{
    return a;
}

double Quadraic_Equation::getB() const{
    return b;
}

double Quadraic_Equation::getC() const{
    return c;
}

double Quadraic_Equation::getDisciriminant() const{
    return pow(b, 2)- 4 * a * c;
}

double Quadraic_Equation::getRoot1() const{
    return (-b + pow((b * b - 4 * a * c), 0.5))/(2 * a);
}

double Quadraic_Equation::getRoot2() const{
    return (-b - pow((b * b - 4 * a * c), 0.5))/(2 * a);
}

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    Quadraic_Equation qu1(a, b, c);
    if(qu1.getDisciriminant() > 0){
        cout << "root1 is " << qu1.getRoot1() << " root2 is " << qu1.getRoot2() << endl;
    }
    else if(qu1.getDisciriminant() == 0){
        cout << "root is " << qu1.getRoot1() << endl;
    }
    else
        cout << "The equation has no real roots" << endl;
    return 0;
}
