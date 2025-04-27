#include <iostream>
#include <cmath>
using namespace std;

class MyPoint{
    private:
        double x;
        double y;
    public:
        MyPoint();
        MyPoint(double, double);
        double getx() const;
        double gety() const;
        double distance(MyPoint);
};

MyPoint::MyPoint(){
    x = 0;
    y = 0;
}

MyPoint::MyPoint(double x, double y){
    this -> x = x;
    this -> y = y;
}

double MyPoint::getx() const{
    return x;
}

double MyPoint::gety() const{
    return y;
}

double MyPoint::distance(MyPoint point){
    return pow((pow(x - point.getx(), 2) + pow(y - point.gety(), 2)), 0.5);
}

int main(){
    MyPoint dot1;
    MyPoint dot2(1, 0);

    cout << dot1.distance(dot2) << endl;
    return 0;
}
