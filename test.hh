#pragma once

#include <iostream>
#include <sstream>
#include <iomanip>

#include <string>

using namespace std;

class Vector {
public:
	double x, y, z;
	Vector(double a, double b, double c) {
		x = a, y = b, z = c;
	}
	Vector() { x = y = z = 0; }
	~Vector() {}
	


	Vector* add(Vector v) {
		x += v.x;
		y += v.y;
		z += v.z;

		return this;
	}

	const string toString() const {
		ostringstream buffer;
		buffer << fixed << showpoint << setprecision(2)
			<< "(x:" << x << ", y:" << y << ", z:" << z << ")";
		return buffer.str();
	}
};

Vector combineXYZ(double x, double y, double z) {
	return Vector(x, y, z);
}
