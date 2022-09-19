#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <string>
#include <regex>
using namespace std;

// CIRCLE Class 

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return M_PI * pow(radius, 2);
}



// RECTANGLE Class 
class Rectangle {

	public :
		float getArea();
		float width;
		float height;

};

float Rectangle::getArea() {
	return width * height;
}


int main() {
	Circle donut;
	donut.radius = 50;
	
	cout << "The Area of Circle 'donut' unit is: " << donut.getArea() << endl;


	// MISSION
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;

	cout << "The Area of Rectangle 'rect' is " << rect.getArea() << endl;
	
	// END MISSION


	return 0;
}



