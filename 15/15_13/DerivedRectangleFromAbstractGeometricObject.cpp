#include "DerivedRectangleFromAbstractGeometricObject.h"

// Construct a default retangle object
Rectangle::Rectangle(){
    width = 1;
    height = 1;
}

// Construct a rectangle object with specified width and height
Rectangle::Rectangle(double width, double height){
    setWidth(width);
    setHeight(height);
}

// Construct a rectangle object with specified width, height, color, filled
Rectangle::Rectangle(double width, double height,
    const string& color, bool filled){
    setWidth(width);
    setHeight(height);
    setColor(color);
    setFilled(filled);
}

// Return the width of this rectangle
double Rectangle::getWidth() const{
    return width;
}

// Set a new width
void Rectangle::setWidth(double width){
    this -> width = (width >= 0) ? width : 0;
}

double Rectangle::getHeight() const{
    return height;
}

// Set a new height
void Rectangle::setHeight(double height){
    this -> height = (height >= 0) ? height : 0;
}

// Return the area of this retangle
double Rectangle::getArea() const{
    return width * height;
}

// Rerurn the perimeter of this retangle
double Rectangle::getPerimeter() const{
    return 2 * (width + height);
}
