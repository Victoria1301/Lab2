#pragma once
#include <math.h>
const double M_Pi = 3.14159;
namespace Prog2 {
	struct Point {
		double x;
		double y;
		Point(double x0 = 0, double y0 = 0) :x(x0), y(y0) {}
	};
	class ellipse {
	private:
		Point p;
		double a;
		double b;
	public:
		//конструкторы
		ellipse(); //конструктор  по умолчанию 
		ellipse(double x0, double y0, double af = 1, double bf = 1);  //double af = 1, double bf = 1
		//сеттеры
		ellipse& setP(const Point& p0) { p = p0; return *this; }//"&" - для исключения работы копирующего конструктора
		ellipse& setA(double a0);
		ellipse& setB(double b0);
		//геттеры
		Point getP() const { return p; }
		inline double getA() const { return a; }
		inline double getB() const { return b; }
		//функции 
		inline double focal_distance() const { return sqrt(a * a - b * b); }
		inline double eccentricity() const { return sqrt(a * a - b * b) / a; }
		inline double length() const { return (4 * M_Pi * a * b + (a - b) * (a - b)) / (a + b); }
		inline double square() const { return M_Pi * a * b; }
		inline double min_distance() const { return a * (1 - (sqrt(a * a - b * b)) / a); }
		inline double max_distance() const { return a * (1 + (sqrt(a * a - b * b)) / a); }
		inline double coordinate_y(double x) const { return  sqrt(((a * a - (x - p.x) * (x - p.x)) * b * b) / (a *a)) + p.y; }
	
	};
};
