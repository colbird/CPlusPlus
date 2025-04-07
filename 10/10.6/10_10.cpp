#include <iostream>
#include "Circle.h"
using namespace std;

void printCircle(const Circle& c){
    cout << "The area of the circlr of radius "
    << c.getRadius() << " is " << c.getArea() << endl;
}

int main(){
    cout << "Number of circle objects created: "
    << Circle::getNumberOfJects() <<endl;

    Circle circle1;
    printCircle(circle1);
    cout << "Number of circle objects created: "
    << Circle::getNumberOfJects() <<endl;
    
    Circle circle2(5.0);
    printCircle(circle2);
    cout << "Number of circle objects created: "
    << Circle::getNumberOfJects() <<endl;
    
    circle1.setRadius(3.3);
    printCircle(circle1);

    cout << "Number of circle objects created: "
    << Circle::getNumberOfJects() <<endl;
    cout << "Number of circle objects created: "
    << Circle::getNumberOfJects() <<endl;

    return 0;
}
