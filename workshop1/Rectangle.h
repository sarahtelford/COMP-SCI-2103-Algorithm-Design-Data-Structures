#ifndef RECTANGLE_H
#define RECTANGLE_H 
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Rectangle: public Shape
{
public:
	Rectangle();
	Rectangle(double h, double l);
	string get_name();
	double get_area();
	double get_perimeter();
	~Rectangle();

private: 
	double height;
	double length;
	string name;
};

#endif