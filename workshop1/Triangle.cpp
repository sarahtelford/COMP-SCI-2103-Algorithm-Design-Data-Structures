#include <iostream>
#include <string>
#include "Shape.h"
#include "Triangle.h"

using namespace std;

	Triangle::Triangle(){

	}

	Triangle::Triangle(int lenB, int len1, int len2, double hei){

		lenght_base=lenB;
		lenght_side1=len1;
		lenght_side2=len2;
		tri_height=hei;

		if (lenght_side1+lenght_side2 > lenght_base){
			 valid = true; 
			}

		else {
			 valid = false;
			 cout << "Error invalid Triangle" << endl;
			}

	}

	string Triangle::get_name(){

		cout << valid; 

		while (valid == true){

			if (lenght_base == lenght_side1 && lenght_side1 == lenght_side2){
				name = "Equilateral";
			}

			else if (lenght_side1 == lenght_side2 && lenght_base != lenght_side1){
				name = "Isosceles";
			}

			else if (lenght_side1 != lenght_side2 && lenght_base != lenght_side1 && lenght_base != lenght_side2){
				name = "Scalene";
			}

			else {
				name = "Error invalid Triangle";
			}
		}
		
		return name;

	}

	double Triangle::get_area(){
		double area; 
		area = 0.5*lenght_base*tri_height;
		return area; 
	}

	double Triangle::get_perimeter(){
		double perimeter;
		perimeter = lenght_side1+lenght_side2+lenght_base;
		return perimeter;
	}

	Triangle::~Triangle(){

	}