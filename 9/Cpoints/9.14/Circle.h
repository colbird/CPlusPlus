class Circle{
public:
    // The radius of this circle
    double radius;

    // Construct a default circle object
    Circle();

    // Construct a circle object
    Circle(double);

    // Return the area of this circle
    double getArea(){
        return radius * radius * 3.14159;
    }
};
