#include "AbstractGeometricObjecst.h"

GemetricObject::GemetricObject(){
    color = "white";
    filled = false;
}

GemetricObject::GemetricObject(const string& color, bool filled){
    setColor(color);
    setFilled(filled);
}

string GemetricObject::getColor() const{
    return color;
}

void GemetricObject::setColor(const string& color){
    this -> color = color;
}

bool GemetricObject::isFilled() const{
    return filled;
}

void GemetricObject::setFilled(bool filled){
    this -> filled = filled;
}

string GemetricObject::toString() const{
    return "Gemetric Object";
}
