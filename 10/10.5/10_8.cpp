#include <iostream>
#include "Circle.h"
using namespace std;

int main(){
    cout << "Number of circle objects created: "
    << Circle::getNumberOfJects() <<endl;

    Circle circle1;
    cout << "The area of the circlr of radius "
    << circle1.getRadius() << " is " << circle1.getArea() << endl;
    cout << "Number of circle objects created: "
    << Circle::getNumberOfJects() <<endl;
    
    Circle circle2(5.0);
    cout << "The area of the circlr of radius "
    << circle2.getRadius() << " is " << circle2.getArea() << endl;
    cout << "Number of circle objects created: "
    << Circle::getNumberOfJects() <<endl;
    
    circle1.setRadius(3.3);
    cout << "The area of the circlr of radius "
    << circle1.getRadius() << " is " << circle1.getArea() << endl;

    cout << "Number of circle objects created: "
    << Circle::getNumberOfJects() <<endl;
    cout << "Number of circle objects created: "
    << Circle::getNumberOfJects() <<endl;

    return 0;
}
