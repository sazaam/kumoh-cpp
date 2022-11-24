
#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


void placeCursor(int x, int y) {
    COORD CursorPosition = { (short) x, (short) y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

template <class T>
class XYValue {
    T val;
    int a, b;
public:
    XYValue(int a, int b, T val) {
        this->a = a;
        this->b = b;
        this->val = val;
    }
    void showValue() {
        placeCursor(a, b);
        cout << val << endl;
    };
};


int main() {

    XYValue<char> cval(2, 2, 'A');
    XYValue<int> ival(5, 5, 7);
    XYValue<double> dval(10, 4, 3.14);

    cval.showValue();
    ival.showValue();
    dval.showValue();

	return 0;
}