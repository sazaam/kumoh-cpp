#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;







void showState(ios& str) {
	cout << "eof()" << str.eof() << endl;
	cout << "eof()" << str.fail() << endl;
	cout << "eof()" << str.bad() << endl;
	cout << "eof()" << str.good() << endl;
	
}


int main() {


	/*

	// READ windows.ini EXAMPLE
	const char* file = "C:\\windows\\system.ini";

	ifstream f;
	f.open(file, ios::in | ios::binary);
	if (!f) {
		cout << "error opening file..." << endl;
		return 0;
	}

	int c = 0;
	char s[32];

	while (!f.eof()) {
		f.read(s, 32);
		int n = f.gcount();
		cout.write(s, n);

		c += n;
	}

	cout << "finished readinig bytes, " << c << "bytes total" << endl;
	f.close();


	*/




	/*

	// COPY EXAMPLE

	const char* src = ".\\assets\\desert.jpg";
	const char* dest = ".\\assets\\desert_copy.jpg";


	ifstream fsrc(src, ios::in | ios::binary);
	if (! fsrc) {
		cout << src << endl;
		return 0;
	}

	ofstream fdest(dest, ios::out | ios::binary);
	if (! fdest) {
		cout << dest << endl;
		return 0;
	}

	int c;
	while ((c = fsrc.get())!= EOF) {
		fdest.put(c);
	}
	cout << src << " was copied int " << dest << endl;

	fsrc.close();
	fdest.close();
	*/






	/*

	// COPY USING BUFFER EXAMPLE
	const char* src = ".\\assets\\tulips.jpg";
	const char* dest = ".\\assets\\tulips_copy.jpg";


	ifstream fsrc(src, ios::in | ios::binary);
	if (! fsrc) {

		cout << "error reading file..." << src << endl;
		return 0;
	}

	ofstream fdest(dest, ios::out | ios::binary);
	if (! fdest) {
		cout << "error reading file..." << dest << endl;
		return 0;
	}

	const int len = 1024;
	char buf[len];

	while (! fsrc.eof()) {
		fsrc.read(buf, len);
		int n = fsrc.gcount();
		fdest.write(buf, n);
	}

	cout << src << " was copied int " << dest << endl;

	fsrc.close();
	fdest.close();

	*/


	

	/*
	const char* file = ".\\assets\\data.dat";


	// PREPARE FOR WRITING FILE

	ofstream fout;
	fout.open(file, ios::out | ios::binary);
	if (!fout) { cout << "error opening file " << file << endl; return 0; }


	// MY DATA
	int n[] = { 0,1,2,3,4,5,6,7,8,9 };
	double d = M_PI;
	
	// WRITE
	fout.write((char*)n, sizeof(n));
	fout.write((char*)(&d), sizeof(d));
	fout.close();

	// CHANGE VALUES To SOMETHING ELSE
	for (int i = 0; i < 10 ; i++) {
		n[i] = 99;
	}
	d = 8.15;

	// PREPARE FOR READING FILE
	
	ifstream fin(file, ios::in | ios::binary);
	if (! fin) { cout << "error opening file " << file << endl; return 0; }

	// READ NOW
	fin.read((char*)n, sizeof(n));
	fin.read((char*)(&d), sizeof(d));
	


	// LOG
	for (int i = 0; i < 10; i++) cout << n[i] << ' ';
	cout << endl << d << endl ;

	*/
	

	/*
	
	// UNEXISTING FILE EXAMPLE & CHECKING FOR FILE INTEGRITY / CORRUPTION
	const char* NOfile = ".\\assets\\nofile.jpg";
	const char* YESfile = ".\\assets\\student.txt";
		

	ifstream fin(NOfile, ios::in | ios::binary);
	if (!fin) {
		cout << "error opening file " << NOfile << endl; 
		
		showState(fin);
		
		fin.open(YESfile);
		showState(fin);
	}



	int c;
	while((c = fin.get()) != EOF) {
		cout.put((char)c);
	}


	cout << endl;
	showState(fin);

	fin.close();

	*/
	
	
	

	return 0;
}

















