
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


/* Mission Week 4 :
    Base class and Extended Classes through Inheritance :
    - Declare both Rectangle and Triangle Subclasses of Shape SuperClass.
    - Make necessary variables to calculate Area and Perimeter inside Shape Class, (and Private)
    - Declare Area and Perimeter calculating methods in respective Rectangle and Triangle Classes.

    * Bonus * : Add Circle as another Primitive Shape Subclass
*/

// Define first the Base class Shape
class Shape {
private :
    int w, h; // setting width and height private for cleanliness purposes
public :
    double get_width() { return w; };
    double get_height() { return h; };
    // Declaring Shape's constructor
    Shape(int a) { w = a, h = a; }; // make one parameter possible for shorthand use & in case of Circle definition
    Shape(int a, int b) {
        w = a, h = b;
    }
    // Declariung Shape's Destructor
    ~Shape() { cout << "Destroying Shape (w:" << w << ", " << h << ")." << endl; };
};

class Rectangle : public Shape {
public :
    double get_area(){
        return get_width() * get_height();
    };
    double get_perimeter() {
        return 2 * ( get_width() + get_height() );
    };
    Rectangle(int a) : Shape{a} {}; // shorthand use
    Rectangle(int a, int b) : Shape{ a, b } {}; // Specifying here the Called 'Shape' Constructor will ensure Rectangle will be instanciated through Shape's ctor.
    ~Rectangle() { cout << "Destroying Rectangle (area:" << get_area() << ")." << endl; };
};

class Triangle : public Shape {
public:
    double get_area() {
        return ( get_width() * get_height() ) / 2;
    };
    Triangle(int a) : Shape{ a } {}; // shorthand use
    Triangle(int a, int b) : Shape{ a, b } {}; // Same for Triangle, which I want to instantiate through Shape's ctor.
    ~Triangle () { cout << "Destroying Triangle (area:" << get_area() << ")." << endl;
    };
};

class Circle : public Shape {
public:
    double get_area() {
        return (M_PI * pow(get_width(), 2));
    };
    double get_circumference() {
        return (get_width() * 2 * M_PI);
    };
    Circle(int a) : Shape{ a } {}; // Same for Triangle, which I want to instantiate through Shape's ctor.
    ~Circle() {
        cout << "Destroying Circle (area:" << get_area() << ")." << endl;
    };
};


int main() {

    Rectangle rec(5, 5);
    Triangle tri(5, 5);
    Circle circ(5);

    cout << "사각형 가로=" << rec.get_width() << "  / 세로=" << rec.get_height() << endl;
    cout << "사각형 둘레=" << rec.get_perimeter() << endl;
    cout << "사각형 면적=" << rec.get_area() << endl << endl;
    cout << "삼각형 가로=" << tri.get_width() << "  / 세로=" << tri.get_height() << endl;
    cout << "삼각형 면적=" << tri.get_area() << endl;
    cout << "원형 반지름=" << circ.get_width() << endl;
    cout << "원형 면적=" << circ.get_area() << endl;
    cout << "원형 둘레=" << circ.get_circumference() << endl;

    return 0;
}

