
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;


void placeCursor(int x, int y) {
    COORD CursorPosition = { (short) x, (short) y }; // needs Casting into Short to avoid warnings
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition); // Glad to know we can do that !!
}

template <class T>
class XYValue {
    T val;
    int a, b;
public: 
    
    // writing Class methods outside of Class Definition is against my rules ^^
    // 1. Not clean for further maintenance
    // 2. especially in C++, A LOT more writing is necessary
    // 
    // so for now I should write inside the class definition,
    // but if I find why it is good, I will adopt it


    XYValue(int a, int b, T val) { // a & b will be ints for sure, but val can be of dynamic type
        this->a = a;
        this->b = b;
        this->val = val;
    }
    void showValue() {
        placeCursor(a, b);
        cout << val << endl;
    };
};

/*
I still have to remember how to write outside classdefinition, just in case
template<class T>
XYValue<T>::XYValue(int a, int b, T val) { // a & b will be ints for sure, but val can be of dynamic type
    this->a = a;
    this->b = b;
    this->val = val;
}
*/


int main() {

    XYValue<char> cval(2, 2, 'A');
    XYValue<int> ival(5, 5, 7);
    XYValue<double> dval(10, 4, 3.14);

    cval.showValue();
    ival.showValue();
    dval.showValue();

	return 0;
}