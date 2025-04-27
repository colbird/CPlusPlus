#include <iostream>
using namespace std;

class Fan{
    public:
    Fan();
    Fan(int, double, bool);
    int getSpeed();
    void setSpeed(int);
    bool getOn();
    void setOn(bool);
    double getRadius();
    void setRadius(double);

    private:
        int speed;
        bool on;
        double radius;
};
Fan::Fan(){
    speed = 1;
    on = false;
    radius = 5;
}
Fan::Fan(int speed, double radius, bool on){
    this -> speed = speed;
    this -> radius = radius;
    this -> on = on;
}

int Fan::getSpeed(){
    return speed;
}

double Fan::getRadius(){
    return radius;
}

bool Fan::getOn(){
    return on;
}

void Fan::setSpeed(int speed){
    this -> speed = speed;
}

void Fan::setRadius(double radius){
    this -> radius = radius;
}

void Fan::setOn(bool on){
    this -> on = on;
}

int main(){
    Fan fan1, fan2;
    fan1.setSpeed(3);
    fan1.setRadius(10);
    fan1.setOn(true);
    fan2.setSpeed(2);
    fan2.setRadius(5);
    fan2.setOn(false);
    cout << "fan1" << endl;
    cout << fan1.getSpeed() << " " << fan1.getRadius() << " " << fan1.getOn() << endl;
    cout << "fan2" << endl;
    cout << fan2.getSpeed() << " " << fan2.getRadius() << " " << fan2.getOn() << endl;
    return 0;
}
