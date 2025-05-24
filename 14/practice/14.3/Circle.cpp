#include "Circle.h"

int Circle::numberOfObjects = 0;

// Construct a circle object
Circle::Circle(){
    radius = 1;
    numberOfObjects++;
}

// Construct a circle object
Circle::Circle(double newRadius){
    radius = newRadius;
    numberOfObjects++;
}

// Return the area of this circle
double Circle::getArea() const{
    return radius * radius * 3.14159;
}

// Return the radius of this circle
double Circle::getRadius() const{
    return radius;
}

// Set a new radius
void Circle::setRadius(double newRadius){
    radius = (newRadius >= 0) ? newRadius : 0;
}

// Return the number of circle objects
int Circle::getNumberOfJects(){
    return numberOfObjects;
}

int Circle::compare(const Circle& cir) const{
    if (radius > cir.radius)
        return 1;
    else if (radius < cir.radius)
        return -1;
    else
        return 0;
}

bool operator<(const Circle& cir1, const Circle& cir2){
    return cir1.compare(cir2) == -1;
}
bool operator<=(const Circle& cir1, const Circle& cir2){
    return (cir1.compare(cir2) == -1 || cir1.compare(cir2) == 0);
}
bool operator==(const Circle& cir1, const Circle& cir2){
    return cir1.compare(cir2) == 0;
}
bool operator!=(const Circle& cir1, const Circle& cir2){
    return cir1.compare(cir2) != 0;
}
bool operator>(const Circle& cir1, const Circle& cir2){
    return cir1.compare(cir2) == 1;
}
bool operator>=(const Circle& cir1, const Circle& cir2){
    return (cir1.compare(cir2) == -1 || cir1.compare(cir2) == 0);
}
