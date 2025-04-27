#include <iostream>
using namespace std;

class Rectangle{
    public:
    Rectangle();
    Rectangle(double, double);
    double getWidth();
    void setWidth(double);
    double getHeight();
    void setHeight(double);
    double getArea();
    double getPerimeter();

    private:
    double width;
    double height;
};

Rectangle::Rectangle(){
    width = 1;
    height = 1;
}

Rectangle::Rectangle(double width, double height){
    this -> width = width;
    this -> height = height;
}

double Rectangle::getWidth(){
    return width;
}

double Rectangle::getHeight(){
    return height;
}

void Rectangle::setWidth(double width){
    this -> width = width;
}

void Rectangle::setHeight(double height){
    this -> height = height;
}

double Rectangle::getArea(){
    return width * height;
}

double Rectangle::getPerimeter(){
    return (width + height)* 2;
}

int main(){
    // 测试
    Rectangle re1(4, 40);
    Rectangle re2(3.5, 35.9);
    cout << "re1" << endl;
    cout << re1.getWidth() << endl;
    cout << re1.getHeight() << endl;
    cout << re1.getArea() << endl;
    cout << re1.getPerimeter() << endl;
    cout << endl;
    cout << "re2" << endl;
    cout << re2.getWidth() << endl;
    cout << re2.getHeight() << endl;
    cout << re2.getArea() << endl;
    cout << re2.getPerimeter() << endl;

    return 0;
}
