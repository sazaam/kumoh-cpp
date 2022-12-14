#include <string>
#include <iostream>

using namespace std;


class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	int getKick() { return kick; }
	int getPunch() { return punch; }
	void show() {
		cout << "kick : " << kick << ", punch : " << punch << endl;
	}
	// ADDITION
	friend Power operator+(Power a, Power b) { return Power(a.kick + b.kick, a.punch + b.punch); }
	friend Power operator+(Power a, int b) { return Power(a.kick + b, a.punch + b); }

	// SUBTRACTION
	friend Power operator-(Power a, Power b) { return Power(a.kick - b.kick, a.punch - b.punch); }
	friend Power operator-(Power a, int b) { return Power(a.kick - b, a.punch - b); }

	// MULTIPLICATION
	friend Power operator*(Power a, Power b) { return Power(a.kick * b.kick, a.punch * b.punch); }

	friend Power& operator+=(Power a, Power b) {
		a.kick += b.kick;
		a.punch += b.punch;
		return a;
	}
	friend Power& operator+=(Power a, int n) {
		a.kick += n;
		a.punch += n;
		return a;
	}


	// CUSTOMS ++, --, +=
	Power& operator++() {
		++kick, ++punch;
		return *this;
	}
	// VERY IMPORTANT this (int x) is what helps differentiate between the var++ and ++var operators !! 
	// add (int x) as parameter for var++ operator
	Power& operator++(int x) {
		kick++, punch++;
		return *this;
	}
	Power& operator--() {
		--kick, --punch;
		return *this;
	}
	Power& operator--(int x) {
		kick--, punch--;
		return *this;
	}


	bool operator==(Power o) {
		return (kick == o.kick) && (punch == o.punch);
	}
	bool operator!() {
		return kick == punch == 0;
	}
	bool operator&&(Power o) {
		return (o.kick != 0 && kick != 0) && (o.punch != 0 && punch != 0);
	}
	bool operator||(Power o) {
		return !(o.punch == o.kick == punch == kick == 0);
	}
	void compare(Power o) {
		cout << (*this == o ? "TRUE" : "FALSE") << endl;
	}



};



class Time {
	int h, m, s;
public:
	Time(int h, int m, int s) {
		this->h = h;
		this->m = m;
		this->s = s;
	}

	int calculate() { return (h * 60 + m) * 60 + s; } // Get total Time Length in Seconds

	static int calculate(Time a) { return a.calculate(); }

	//friend bool operator==(Time a, Time b) { return a.calculate() == b.calculate(); } // If a and b calculates the same, then Time a is equivalent to Time b
	//friend bool operator!=(Time a, Time b) { return a.calculate() != b.calculate(); }



	bool operator==(Time b) { return calculate() == b.calculate(); } // If a and b calculates the same, then Time a is equivalent to Time b
	bool operator!=(Time b) { return calculate() != b.calculate(); }


};


int main() {



	// Power Example

	/*
	Power a(3, 5), b;

	a.show();
	b.show();


	b = a + 2;

	b += a;
	b++;

	a.show();
	b.show();
	a.compare(b);

	cout << "A is Not Default" << (!a) << endl;
	cout << "Are both NOT default : " << (a && b) << endl;
	cout << "At least one is NOT default : " << (a && b) << endl;
	*/

	// Time Comparison Example
	
	Time t1(1, 2, 3), t2(1, 2, 3);

	cout << "(t1 == t2) " << boolalpha << (t1 == t2) << endl;
	cout << "(t1 != t2) " << boolalpha << (t1 != t2) << endl;

	/**/


	return 0;
}