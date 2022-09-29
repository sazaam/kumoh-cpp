#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <regex>
#include <string>

using namespace std;


// Vector Class
#include "test.hh"



class TV {
	int size;
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class WideTV: public TV {
	bool videoIn;
public:
	WideTV(int size, bool videoIn) :TV(size){
		this->videoIn = videoIn;
	}
	bool getVideoIn() { return videoIn; }
};

class SmartTV : public WideTV {
	string IP;
public:
	SmartTV(int size, string IP) :WideTV(size, true) {
		this->IP = IP;
	}
	string getIP() { return IP; }
};







class Base {
	int a;
protected:
	void setA(int a) {
		this->a = a;
	}
public:
	void showA() { cout << a; }
};


class Derived : protected Base{
	int b;
protected:
	void setB(int b) {
		this->b = b;
	}
public:
	void showB() { cout << b; }


};



int main() {


	Derived d;
	
	// d.a = 5; // will fails since protected
	// d.setB(14); // will also fail for same reasons
	d.showB();// will work, but B is absent for now


	Vector v(45,18,5);

	Base b;
	b.showA();
	// d.showA(); will fail since inheritance declaration of Derived was flagged 'protected'

	// cout << v.add(Vector(4,8,9)).toString() << endl;

	return 0;
}

