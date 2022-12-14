

#include <vector>


#include <iostream>
#include <string>

using namespace std;




// Declare a Template as Mystack that can accept any other "T" class
template <class T>
class MyStack {
	int tos;
	T data[100];
public :
	MyStack();
	void push(T el);
	T pop();

};

template <class T>
MyStack<T>::MyStack() {
	tos = -1;
}
template <class T>
void MyStack<T>::push(T el) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = el;
}
template <class T>
T MyStack<T>::pop() {
	T res;
	if (tos == -1) {
		cout << "stack empty";
		return 0;
	}
	res = data[tos--];
	return res;
}




// This template accepts Getter & Setters,
// also can return 2 or more elements when asked GET function
template <class T1, class T2>
class GClass {
	T1 data1;
	T2 data2;
public:
	GClass();
	void set(T1 a, T2 b);
	void get(T1& a, T2& b);
};

template <class T1, class T2>
GClass<T1, T2>::GClass() {
	data1 = 0, data2 = 0;
}

template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
	data1 = a, data2 = b;
}

template <class T1, class T2>
void GClass<T1, T2>::get(T1 &a, T2 &b) {
	a = data1, b = data2;
}



// can work with custom Class
class Point {
	int x, y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void show() {
		cout << "(x: " << x << ", y: " << y << ")" << endl;
	}
};



template <class T>
double av_of_three(T a, T b, T c ) {
	double av = (a + b + c) / 3;

	cout << fixed;
	cout.precision(2);

	cout << "Average of " << a << ", " << b << ", " << c << " = " << av << endl;

	return av;
}


int main() {

	cout << "starting..." << endl;

	av_of_three(10, 50, 40);
	av_of_three(12.5, 16.50, 14.55);

	/*  Vector ->> 
		push_back(* el) = 'append' element at end,  
		at(int index)  returns value @ index in vector 
		begin(), end(), empty()

		erase(iterator it)
		insert(iterator it, el)

		size()
		operator[]()
		operator=()
	*/


	// Vectors example 1
	/*
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;



	v[0] = 10;
	int n = v[2];
	v.at(2) = 5;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	*/

	
	// Vectors example 2
	/*
	vector<string> sv;
	string name;

	cout << "Enter 5 names : " << endl;
	for (int i = 0; i< 5; i++) {
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}

	name = sv.at(0);
	for (int i = 0; i< sv.size() ; i++) {
		if (name < sv[i]) name = sv[i];
	}
	cout << "Last Name in Alphabetical Order : " << name << endl;
	*/








	/*
	

	
	int a;
	double b;
	GClass<int, double> x;

	x.set(2, .05);
	x.get(a, b);

	cout << "(a: " << a << ", b: " << b << ")" << endl;



	char c;
	float d;

	GClass<char, float> y;

	y.set('$', .25);
	y.get(c, d);

	cout << "(c: " << c << ", d: " << d << ")" << endl;


	*/






	return 0;

}