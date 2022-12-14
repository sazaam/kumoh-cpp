#define _USE_MATH_DEFINES

#include <cmath>
#include <string>
#include <iostream>
using namespace std;


bool bigger(int a, int b, int &big) {
	// store bigger in &big reference variable
	big = (a > b) ? a : b ;
	return a == b ;
}


int main() {
	// variables settings
	int a, b, big;
	bool same;

start:
	cout << "Enter two numbers (entering both zeros will end program) :" ;
	cin >> a >> b;
	
	// check for similarity while passing the comparing function
	if(!(same = bigger(a, b, big)))
		cout << (big == a ? "A" : "B") << " is the greater number : " << big << endl;
	else
		cout << " A and B are equal" << endl;

	// Program Control
	if ((a + b) != 0) goto start;
	cout << "ending program...";
	return 0;
}