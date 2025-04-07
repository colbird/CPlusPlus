#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
    public:
        Circle();
        Circle(double);
        double getArea();
        double getRadius();
        void setRadius(double);
        static int getNumberOfJects();

    private:
        double radius;
        static int numberOfObjects;
};

#endif
