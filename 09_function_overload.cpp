#include <iostream>
#include <string>
using namespace std;



/* SUM EXAMPLE*/
int sum(int n, int m) {
	int t = 0;
	for (int i = n; i <= m; i++) { t += i; }
	return t;
}
int sum(int n) {
	return sum(0, n);
}

/* BIG EXAMPLE*/
int big(int a, int b) { return (a > b) ? a : b; }
int big(int a[], int size) {
	int b = a[0];
	for (int i = 1; i < size; i++) { b = big(a[i], b); }
	return b;
}

/* STAR EXAMPLE*/

void star(int n = 5, string s = "*") {
	if (s == "*") { while (n--) cout << s; }
	else { cout << n; }
	cout << "\n";
}
void msg(int n, string s = "") {
	if (s == "") star(n, s);
	cout << s << endl;
}


/* F EXAMPLE */

void f(char c, int line = 1) {
	int n = 10;
	while (line--) {
		n = 10;
		while (n--) { cout << c; }
		cout << endl;
	}

}

void f() {
	return f(' ', 1);
}

/* LINEFILL EXAMPLE */

void lineFill(int n, char c) {
	while (n--) {
		cout << c;
	}
	cout << endl;
}

void lineFill() {
	return lineFill(25, '*');
}


/* VECTOR EXAMPLE */

class Vec {
	int* p;
	int size;
public:
	Vec(int size = 100) {
		this->size = size;
		populate();
	}

	void populate() {
		p = new int[size];
		while (size--) p[size] = size;
	}

	~Vec() {
		delete[] p;
	}
};





int add(int* p, int n) {
	int t = 0, l = sizeof(p);
	for (int i = 0; i < l; i++) {
		t += p[i];
	}
	return t + n;
};

int add(int* p, int n, int* q) {
	return add(p, add(q, n));
};

int main() {

	/* MISSION */
	/*
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };

	int c = add(a, 5);
	int d = add(a, 5, b);

	cout << "C : " << c << endl;
	cout << "D : " << d << endl;
	*/




	// BIG Example
	/*
	int arr[5] = { 1, 9, -2, 8, 6 };
	cout << big(2,3) << endl;
	cout << big(arr, 5) << endl;
	*/


	// SUM Example
	/*
	cout << sum(3,5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
	*/

	// STAR Example
	/*
	star();
	star(10);
	msg(10);
	msg(10, "Hello World");
	*/


	// F example
	/*
	f();
	f('%');
	f('@', 5);
	*/


	// LineFill Example
	/*
	lineFill();
	lineFill(10, '%');
	*/

	// Vector Example
	/*
	Vec* v1, * v2;

	v1 = new Vec();
	v2 = new Vec(1024);

	delete v1;
	delete v2;
	*/








	return 0;
}
