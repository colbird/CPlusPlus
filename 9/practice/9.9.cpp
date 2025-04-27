#include <iostream>
using namespace std;

class LinearEquation{
    private:
        double a;
        double b;
        double c;
        double d;
        double e;
        double f;
    public:
        LinearEquation(double, double, double, double, double, double);
        bool isSolvable() const;
        double getA() const;
        double getB() const;
        double getC() const;
        double getD() const;
        double getE() const;
        double getF() const;
        double getX() const;
        double getY() const;
};

LinearEquation::LinearEquation(double a, double b, double c, double d, double e, double f){
    this -> a = a;
    this -> b = b;
    this -> c = c;
    this -> d = d;
    this -> e = e;
    this -> f = f;
}

bool LinearEquation::isSolvable() const{
   return a*d - b*c;
}

double LinearEquation::getA() const{
    return a;
}

double LinearEquation::getB() const{
    return b;
}

double LinearEquation::getC() const{
    return c;
}

double LinearEquation::getD() const{
    return d;
}

double LinearEquation::getE() const{
    return e;
}

double LinearEquation::getF() const{
    return f;
}

double LinearEquation::getX() const{
    return (e*d-b*f)/(a*d-b*c);
}

double LinearEquation::getY() const{
    return (a*f-e*c)/(a*d-b*c);
}

int main(){
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    LinearEquation linear(a, b, c, d, e, f);
    
    if (linear.isSolvable()){
        cout << "x = " << linear.getX() << endl;
        cout << "y = " << linear.getY() << endl;
    }
    else {
        cout << "The equation has no solution" << endl;
    }
    return 0;
}
