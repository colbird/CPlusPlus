#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
    public:
        Circle();
        Circle(double);
        double getArea()const;
        double getRadius() const;
        void setRadius(double);
        static int getNumberOfJects();
        int compare(const Circle& cir) const;

    private:
        double radius;
        static int numberOfObjects;
};

bool operator<(const Circle& cir1, const Circle& cir2);
bool operator<=(const Circle& cir1, const Circle& cir2);
bool operator==(const Circle& cir1, const Circle& cir2);
bool operator!=(const Circle& cir1, const Circle& cir2);
bool operator>(const Circle& cir1, const Circle& cir2);
bool operator>=(const Circle& cir1, const Circle& cir2);

#endif
