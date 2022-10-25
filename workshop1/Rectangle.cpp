#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"

using namespace std;

	Rectangle::Rectangle(){
	}

	Rectangle::Rectangle(double h, double l){
		length = l; 
		height = h; 
	}

	string Rectangle::get_name(){
		name = "Rectangle";
		return name;
	}

	double Rectangle::get_area(){
		double area; 
		area = length*height; 
		return area; 
	}

	double Rectangle::get_perimeter(){
		double perimeter; 
		perimeter = length+length+height+height; 
		return perimeter; 
	}
	
	Rectangle::~Rectangle(){

	}