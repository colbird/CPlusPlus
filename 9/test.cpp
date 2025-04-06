#include <iostream>
using namespace std;

class Circle{
public:
    // The radius of this circle
    double radius;
    
    // Construct a default circle object
    Circle(){
        radius = 1;
    }

    // Construct a circle object
    Circle(double newRadius){
        radius = newRadius;
    }

    // Return the area of this circle
    double getArea(){
        return radius * radius * 3.14159;
    }
};  // Must place a semicolon here

int main(){
    Circle circle1(1.0);
    Circle circle2(5.0);
    
    cout << sizeof(circle1) << endl;
    cout << sizeof(circle2) << endl;
    cout << sizeof(double) << endl;
    return 0;
}
