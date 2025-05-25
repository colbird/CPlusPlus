#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "AbstractGeometricObjecst.h"

class Rectangle: public GemetricObject{
    public:
        Rectangle();
        Rectangle(double width, double height);
        Rectangle(double width, double height,
            const string& color, bool filled);
        double getWidth() const;
        void setWidth(double);
        double getHeight() const;
        void setHeight(double);
        double getArea() const;
        double getPerimeter() const;

    private:
        double width;
        double height;
};

#endif
