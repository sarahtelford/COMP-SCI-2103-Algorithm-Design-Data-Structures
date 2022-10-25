#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"

using namespace std;

	Circle::Circle(){ 
	}

	Circle::Circle(string n, double d){
		name = n;
		diameter = d;
	}
	
	string Circle::get_name(){
		return name; 
	}
	
	double Circle::get_area(){
		double area; 
		area = 3.1415926*diameter;
		return area; 
	}
	
	double Circle::get_perimeter(){
		double perimeter;
		perimeter = 3.1415926*diameter;
		return perimeter;
	}
	
	Circle::~Circle(){

	}