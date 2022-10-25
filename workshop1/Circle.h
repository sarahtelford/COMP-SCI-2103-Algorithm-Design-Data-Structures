#ifndef CIRCLE_H
#define CIRCLE_H 
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Circle: public Shape
{
public:
	Circle();
	Circle(string n, double d);
	string get_name();
	double get_area();
	double get_perimeter();
	string name;
	~Circle();

private: 
	double diameter; 
};


#endif