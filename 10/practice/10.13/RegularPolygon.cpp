#include <cmath>
#include "RegularPolygon.h"
const double PI = 3.1415926;

RegularPolygon::RegularPolygon(){
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int n, double side){
	this -> n = n;
	this -> side = side;
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int n, double side, double x, double y){
	this -> n = n;
	this -> side = side;
	this -> x = x;
	this -> y = y;
}

int RegularPolygon::getN() const{
	return n;
}

double RegularPolygon::getSide() const{
	return side;
}

double RegularPolygon::getX() const{
	return x;
}

double RegularPolygon::getY() const{
	return x;
}

void RegularPolygon::setN(const int& n){
	this -> n = n;
}

void RegularPolygon::setSide(const double& side){
	this -> side = side;
}

void RegularPolygon::setX(const double& x){
	this -> x = x;
}

void RegularPolygon::setY(const double& y){
	this -> y = y;
}

double RegularPolygon::getPerimeter() const{
	return side * n;
} 

double RegularPolygon::getArea() const{
	return (n * pow(getPerimeter(), 2))/(4 * tan(PI / n));
}
