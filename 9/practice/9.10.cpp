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
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double a, b, c, d, e, f;
    a = (y1 - y2);
    b = (x1 - x2);
    c = (y3 - y4);
    d = (x3 - x4);
    e = (y1 - y2)*x1 - (x1 -x2)*y1;
    f = (y3 - y4)*x3 - (x3 -x4)*y3;
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
