#define _USE_MATH_DEFINES


#include <iostream>
#include <string>
#include <cmath>

// for Srand to work
#include <cstdlib>
#include <ctime>

using namespace std;


// randRange HELPER Function
int randRange(int min, int max) {
	return min + (rand() % (max - min + 1));
}


// class Circle Area Calculation
class Circle {
	double r;
public:
	// Methods
	double getRadius() { return r; }
	double getArea() { return pow(r, 2) * M_PI; }
	void setRadius(double r) { this->r = r; }

	// Definitions
	Circle() { this->r = 1; }
	Circle(double r) { this->r = r; }
	~Circle() { cout << "deleting circle of radius : " << r << endl; }
};


class Point {
	int x, y;
public:
	//Point() {};
	Point(int x, int y) {
		setCoords(x, y);
	}
	void setCoords(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showCoords() {
		cout << "(x: " << x << ", y: " << y << ")" << endl;
	}

};



int main() {

	// Data Array Example

	/*
	
	int n;
	cout << "enter number : ";
	cin >> n;

	if (n < 1)  return 0;


	int* p = new int[n];

	if (!p) {
		cout << "Cannot write in memory \n";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " for the n' : ";
		cin >> p[i];
	}
	cout << endl;


	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "Avg => " << sum / n << endl;

	delete[] p;

	*/





	// 2 different Circle Constructors called Example
	/*
	Circle *p, *q;
	p = new Circle;
	q = new Circle(15);

	cout << "Area of p :" << p->getArea() << "\n"
		 << "Area of q :" << q->getArea() << "\n";

	delete p;
	delete q;

	*/





	// Create circles of certain radius Example
	/*
	double rad;
	while (true) {
		cout << "enter a number for radius : ";
		cin >> rad;

		if (rad < 0) break;
		Circle* p = new Circle(rad);

		cout << "Area of circle : " << p->getArea() << endl;
		delete p;
	}

	*/


	// Create circles Arrays Example
	
	/*
	int l = 3, i = l;

	Circle *pArr = new Circle[l];

	pArr[0].setRadius(15);
	pArr[1].setRadius(20);
	pArr[2].setRadius(30);


	while (i--) {

		// VERY IMPORTANT :
		// cann access this array's members by this syntax  (arr + n)->method()

		cout << (pArr + (l - i - 1))->getArea() << endl;
		// but can also use index in arr as for to use the . syntax (simple)
		cout << pArr[l - i - 1].getArea() << endl;
	}


	// VERY IMPORTANT SYNTAX todelete the arr :
	delete[] pArr;
	*/


	
	/*
	int n, r;

	cout << "enter a number N : ";
	cin >> n;


	int ct = 0;
	double area = 0;
	Circle* pArr = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "Enter a radius for Circle " << i+1 << " : ";
		cin >> r;

		(pArr + i)->setRadius(r);
		area = (pArr + i)->getArea();
		cout << "Area of Circle : " << area << endl;
		if (area >= 1000 && area <=2000) {
			ct++;
		}

	}

	cout << "Number of Circles which area are Between 100 ~ 200 :" << ct;
	*/

	
	// Generates Random Points Array Example
	
// always need random seed
	srand((unsigned int)time(NULL));

	/*
	int n;
	cout << "Enter a number of times : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << randRange(0,100) << endl;
	}

	*/
	

	
	// Generates Random Points Array Example

	/*
	int n;
	cout << "Enter a number of times : ";
	cin >> n;

	Point* pArr = new Point[n];
	int l = n, min = 0, max = 100;

	while (l--) {
		(pArr + l)->setCoords(randRange(min, max), randRange(min, max));
		(pArr + l)->showCoords();
	}
	*/



	return 0;
}

