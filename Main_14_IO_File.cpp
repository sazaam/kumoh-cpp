#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {


	/*
	ofstream fout;

	fout.open("song.txt");

	if (!fout) {
		// Error Handling
	}


	int age = 21;
	char singer[] = "Kim";
	char song[] = "Yesterday";

	fout << age << "\n";
	fout << singer << endl;
	fout << song << endl;
	

	fout.close();

	*/

	string loc = "C:\\Users\\user\\Desktop\\assets\\student.txt";

	/*
	
	// first file io check
	ofstream fout(loc);
	if (!fout) {
		// Error Handling here
		cout << "file not found" << endl;
	}


	char name[10], dept[20];
	int sid, yr;

	cout << "name : ";
	cin >> name;


	cout << "id : ";
	cin >> sid;

	cout << "year : ";
	cin >> yr;


	cout << "Department : ";
	cin >> dept;

	
	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;
	fout << yr << endl;
	
	fout.close();

	*/




	ifstream fin;
	fin.open(loc);

	if (!fin) {
		cout << loc << " file does not exist";
	}

	char name[10], dept[20],sid[10];
	int yr;

	fin >> name;
	fin >> sid;
	fin >> dept;
	fin >> yr;

	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;
	cout << yr << endl;
	fin.close();





	return 0;
}