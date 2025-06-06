#include "Circle.h"

// Construct a default circle object
Circle::Circle(){
    radius = 1;
}

// Construct a circlr object
Circle::Circle(double radius){
    this -> radius = radius;
}

// Return the area of this circle
double Circle::getArea(){
    return radius * radius * 3.14159;
}

// Return the radius of this circle
double Circle::getRadius(){
    return radius;
}

// Set a new radius
void Circle::setRadius(double radius){
    this -> radius = (radius >= 0) ? radius : 0;
}
