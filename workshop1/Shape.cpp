#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

Shape::Shape(){
	name = "shape";
}

double Shape::get_area(){
	return 0.0;
}

string Shape::get_name(){
	return name;
}

Shape::~Shape(){

}