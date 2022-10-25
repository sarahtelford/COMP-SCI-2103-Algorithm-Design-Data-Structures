#ifndef SHAPE_H
#define SHAPE_H 
#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
	Shape();
	virtual double get_area() = 0;
	virtual double get_perimeter() = 0; 
	virtual string get_name();
	string name; 
	~Shape();
};

#endif