#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Triangle: public Shape
{
public:
	Triangle();
	Triangle(int lenB, int len1, int len2, double hei);
	string get_name();
	double get_area();
	double get_perimeter();
	~Triangle();

	private:
	int lenght_base;
	int lenght_side1;
	int lenght_side2;
	double tri_height;
	bool valid; 
		

};

#endif