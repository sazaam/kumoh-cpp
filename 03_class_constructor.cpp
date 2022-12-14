#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;



/*

///////// CIRCLE

class Circle {
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle(); // Destructor
	double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r) {

	radius = r;
	cout << "(radius: " << radius << ")" << endl;
}

Circle::~Circle() {
	cout << "circle of radius: " << radius << " will be destructed" << endl;
	
}

double Circle::getArea() {
	return M_PI * pow(radius, 2);
}


///////// POINT


class Point {
public:
	int x, y;
	void show() { cout << "(x:" << x << ", y:" << y << ")" << endl; }
	Point();
	Point(int a, int b);
};

Point::Point() :Point(0,0){}
Point::Point(int a, int b) : x(a), y(b) {}



Circle G_Donut(100);
Circle G_Pizza(200);

void f() {
	Circle fdonut(10);
	Circle fpizza(20);

	cout << "donut exists :" << fdonut.radius << endl;

	cout << "Let's see if nested circles are destroyed yet" << endl;

	cout << "donut exists :" << fdonut.radius << endl;
}

int main() {
	
	Point origin;
	Point target(100, 200);

	origin.show();
	target.show();
	
	Circle donut;
	Circle pizza(30);

	f();

	cout << "So let's do something also ..." << endl;

	return 1;
}

*/


//////////////////////////////////////////////// MISSION 1
/*
class Rectangle {
public:
	int width, height;
	double getArea() { return width * height; };
	Rectangle();
	Rectangle(int a);
	Rectangle(int a, int b);
};

Rectangle::Rectangle() : Rectangle(0) {};
Rectangle::Rectangle(int a) : Rectangle(a, a) {};
Rectangle::Rectangle(int a, int b) : width(a), height(b) {};


int main() {

	
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
	

	return 1;
}
*/

//////////////////////////////////////////////// MISSION 2



class Rectangle {
public:
	int w, h;
	bool isSquare() { return w == h; };
	
	Rectangle();
	Rectangle(int a);
	Rectangle(int a, int b);
	~Rectangle() { cout << "가로 " << w << " 세로 "<< h <<" 사각형 종료" << endl; };
};
// Describe once in each fallback way we need :
// I want w/ no parameters
Rectangle::Rectangle() : Rectangle(1) {}
// i want w/ 1 parameter
Rectangle::Rectangle(int a) : w(a), h(a) {}
// And not forget the actual description
Rectangle::Rectangle(int a , int b) : w(a), h(b) {}

// if LNK2019	"public: __thiscall ...."  [...] 'unresolved external symbol referenced in function' error occurs, buyt code seems clear, these contructor declarations are missing or wrong.


int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;

	return 1;
}
/**/