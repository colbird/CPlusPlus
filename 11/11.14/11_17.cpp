#include <iostream>
#include "Circle.h"
using namespace std;

int main(){
    Circle circle1(5);
    Circle circle2(circle1);

    cout << "After creating circle2 from circle1: " << endl;
    cout << "\tCircle1.getRadius() return " << circle1.getRadius() << endl;
    cout << "\tCircle2.getRadius() return " << circle2.getRadius() << endl;

    circle1.setRadius(10.5);
    circle2.setRadius(20.5);

    cout << "After modifying circle1 and circle2: " << endl;
    cout << "\tCircle1.getRadius() return " << circle1.getRadius() << endl;
    cout << "\tCircle2.getRadius() return " << circle2.getRadius() << endl;
    
    return 0;
}
