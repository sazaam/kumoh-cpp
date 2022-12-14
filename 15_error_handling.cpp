#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

/*

	Exception Handling

*/



int main() {
	
	int n, sum, av;

	while (1) {
		cout << "entrer sum value" << endl;
		
		cin >> sum;

		cout << "enter number of times" << endl;

		cin >> n;

		try {
			if (n <= 0) throw n;
			else av = sum / n;
			cout << av << endl;
		}
		catch (int x) {
			cout << "cannot divide by zero";
		}
		



	}

	return 0;
}













