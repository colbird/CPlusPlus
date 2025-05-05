#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H

class RegularPolygon{
	public:
		RegularPolygon();
		RegularPolygon(int, double);
		RegularPolygon(int, double, double, double);
		int getN() const;
		double getSide() const;
		double getX() const;
		double getY() const;
		void setN(const int&);
		void setSide(const double&);
		void setX(const double&);
		void setY(const double&);
		double getPerimeter() const;
		double getArea() const;
	private:
		int n;
		double side;
		double x;
		double y;
};

#endif
