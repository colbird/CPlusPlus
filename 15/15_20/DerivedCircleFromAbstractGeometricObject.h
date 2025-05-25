#ifndef CIRCLE_H
#define CIRCLE_H
#include "AbstractGeometricObjecst.h"

class Circle: public GemetricObject{
    public:
        Circle();
        Circle(double);
        Circle(double radius, const string& color, bool filled);
        double getRadius() const;
        void setRadius(double);
        double getArea() const;
        double getPerimeter() const;
        double getDiameter() const;

    private:
        double radius;
};  // Must place semicolon here

#endif
