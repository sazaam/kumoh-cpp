
#include <string>
#include <iostream>

using namespace std;



class ArrayUtil {
public:
	static void change(int src[], double dest[], int size) {
		for (int i = 0; i < size ; i++) {
			dest[i] = 0.0 + src[i] ;
		}
	}
	static void change(double src[], int dest[], int size) {
		for (int i = 0; i < size; i++) {
			dest[i] = 0 + src[i];
		}
	}
	
};

void show(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void show(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << fixed;
		cout.precision(1);
		cout << arr[i] << " ";
	}
}


int main() {


	int x[] = { 1,2,3,4,5 };

	double y[5];

	double z[] = {9.9, 8.8, 7.7, 6.6, 5.5};

	int size = 5;

	
	
	cout << "int => double ";
	
	show(x, size);
	cout << "  ==>  ";
	ArrayUtil::change(x, y, size);
	show(y, size);

	cout << endl;

	cout << "double => int ";

	show(z, size);
	cout << "  ==>  ";
	ArrayUtil::change(z, x, size);
	show(x, size);

	cout << endl;


	
	return 0;
}