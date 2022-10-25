#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
	Circle * A = new Circle("Circle", 12.3);

	cout << A->get_area() << endl;
	cout << A->get_name()  << endl;
	cout << A->get_perimeter() << endl;


	Rectangle * B = new Rectangle(1.5, 1.3);

	cout << B->get_area() << endl;
	cout << B->get_name()  << endl;
	cout << B->get_perimeter() << endl;

	Triangle * C = new Triangle(2, 2, 1, 2.1);

	cout <<"Triangle type: " << C->get_name()  << endl;
	cout << "Triangle area: " << C->get_area() << endl;
	cout << "Triangle perimeter: " << C->get_perimeter() << endl;
	
	

}