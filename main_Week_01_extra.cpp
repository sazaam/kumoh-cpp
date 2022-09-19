
#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
using namespace std;



int LoveLetters() {

	string inp;
	string rev = "00000000";
	string love = "LOVE";

	cout << "please Input 8 digits : ";	
	cin >> inp;

	for (int i = 0, l = inp.length(); i < l; i++) {
		
		int inv = l - i - 1;
		char n = (i % 2 == 0) ? toupper(inp[i]) : inp[i];

		rev[inv] = n;
		inp[i] = n;

		cout << "i = " << i << " " ;
		cout << inp << " ";
		cout << rev << endl;

	}

	cout << "Treated :" << inp << endl;
	cout << "Reversed :" << rev << endl;
	cout << "With Love~~~ : " << rev.insert(4.5, love) << endl;


	return 0;
}


int main() {
	
	LoveLetters();

}