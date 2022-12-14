
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>

using namespace std;






// Define Main class Calc That knows Add & Sub operations
class Add {
protected:
    int add(int a, int b) { return a + b; }
};
class Sub {
protected:
    int sub(int a, int b) { return a - b; }
};

class Calc : public Add, public Sub {
public:
    int calc(char op, int a, int b) {
        return (op == '+') ? add(a, b) : sub(a, b);
    };
};





// When subclasses will probably share all 'publics' that Superclass has 
class BaseIO {
public:
    int mode;
};

// 'virtual' keyword declaration mode
class In : virtual public BaseIO {
public:
    int read;
};


class Out : virtual public BaseIO {
public:
    int write;
};

class InOut :public In, public Out {
public:
    bool safe;
};




// RECTANGLE Superclass + SQUARE Extended SubClass
class Rectangle {
protected:
	double w, h;
public:
	double getWidth() { return w; }
	void setWidth() { this->w = w; }
	double getHeight() { return w; }
	void setHeight() { this->h = h; }
	Rectangle(double size) {
		this->w = size;
		this->h = size;
	}
	Rectangle(double w, double h) {
		this->w = w;
		this->h = h;
	}

};

class Square :virtual public Rectangle {
public:
	// here important that calling superclass Constructor is in the constructor definition syntax
	Square(double size) : Rectangle(size) {
		// parameters already passed & class instanciated as superclass

	};
};








/*  MISSION ==> BaseBallPlayer INHERITANCE & VIRTUAL SUBCLASSES DECLARATIONS */


class Man {
public:
    int age = -1;
    string name;
};

class Student: virtual public Man {
public:
    int id = -1;
    string university;
};


class BBP : virtual public Man {
public:
    string position;
    int homeruns;
};


class BBPS : public BBP , public Student{

protected:

public:
    void View() {
        cout
            << "name " + name + ", age : " + to_string(age) + ". \n"
            << "univ " + university + ", id : " + to_string(id) + ". \n"
            << "position " + position + ", number of homeruns : " + to_string(homeruns) + ". \n"
            ;
    };

};



/*  POINTERS  */


class Circ {
    double rad;
public:
    void setRadius(double r) { rad = r; };
    double getArea() {
        return rad * rad * 3.1415;
    };
};



int main() {



    // CALC Class Example
    /*
    Calc saz;

    cout << "2 + 4 = "
        << saz.calc('+', 2, 4) << endl;

    cout << "100 - 8 = "
        << saz.calc('-', 100, 8) << endl;
    
    */

   
    
    // Multiple Subclasses Examples (Use of -virtual- keyword)

    /*
    InOut io;
    io.read = 10;
    io.write = 10;
    io.safe = true;
    io.mode = 5;

    cout << io.read << endl;
    cout << io.write << endl;
    cout << io.safe << endl;
    cout << io.mode << endl;
    // ioObj has indeed all properties and program doesn't shoot any error.

    */
   
   


	// SQUARE Inheritance from RECTANGLE Class
	/*
	Square saz(15);
	cout << "width of Square 'saz' : " << saz.getWidth() << endl ;
	*/

   
   
   
    // CIRCLES & pointers examples
    /*
    const int len = 3;
    Circ arr[len];
    Circ* p;

    p = arr;

    for (int i = 0; i < len; i++) {
        p->setRadius((i + 1) * 10);
        p++;
    }

    p = arr;

    for (int i = 0; i < len; i++) {
        cout << "Area of Circle #" + to_string(i) + " >>> " << p->getArea() << endl;
        p++;
    }
    */

    // BASEBALL Player Example

    

    BBPS bbps;
    bbps.name = "Michel";
    bbps.age = 21;
    bbps.university = "Kumoh";
    bbps.id = 20211314;
    bbps.position = "3rd";
    bbps.homeruns = 13;
    bbps.View();

    /**/



    return 0;
}