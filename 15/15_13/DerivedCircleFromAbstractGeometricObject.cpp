#include "DerivedCircleFromAbstractGeometricObject.h"

// Construct a default circle object
Circle::Circle(){
    radius = 1;
}

// Construct a circle object with specified radius
Circle::Circle(double radius){
    setRadius(radius);
}

// Construct a circle object with specified radius, color, filled
Circle::Circle(double radius, const string& color, bool filled){
    setRadius(radius);
    setColor(color);
    setFilled(filled);
}

// Return the radius of this circle
double Circle::getRadius() const{
    return radius;
}

// Set a new radius
void Circle::setRadius(double radius){
    this -> radius = (radius >= 0) ? radius : 0;
}

// Return the area of this  circle
double Circle::getArea() const{
    return radius * radius * 3.14159;
}

// Return the perimeter of this circle
double Circle::getPerimeter() const{
    return 2 * radius * 3.14159;
}

// Return the diameter of this circle
double Circle::getDiameter() const{
    return 2 * radius;
}
