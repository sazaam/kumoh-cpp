#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;



/*

	Copy (Hard / Soft) of Constructor

	1/	Beware of Destructor on Soft Copies since data(variables) will be referred to and delete once and for all
		This issue will not appear while Hard Copying...

	2/	Original strings storing goes as so in C++ :
		since strings are Arrays of characters (char)
			=> declare as "char* myname"
			=> delete as "delete [] myname"
			=> always ensure string length potential issues (Lower or Equal (<=) only will be tolerated)
			=> "strlen(char* myname)" to get length of character string
			=> "strcpy(local variable, original data)" to copy

	3/ Changing names as in this example has high chance to raise error from compiler at virtual run;
		These errors are related to soft-copying

*/

class Person {
	char* name;
	int id;
public:

	Person(int id, const char* name);
	Person(Person& person);
	~Person();

	void changeName(const char* name);
	void show() { cout << "id : " << id << ", name : " << name << endl; }

};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = (int) strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::Person(Person& person) {
	this->id = person.id;
	int len = (int) strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
}

Person::~Person() {
	if (name) delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) <= strlen(this->name))
		strcpy(this->name, name);
}



/*

Gugudan Example (Multiplication Table Generator)

*/


class Gugu {
	int level;
	int* stages;

public:

	const static int total = 10;
	Gugu(int level);
	Gugu(Gugu& gugu);

	void setup();
	void change(int level);
	void show();

};



Gugu::Gugu(int level) {
	this->level = level;
	setup();
}

Gugu::Gugu(Gugu& gugu) {
	this->level = gugu.level;
	setup();
}

void Gugu::setup() {

	stages = new int[total];
	for (int i = 0; i < total; i++) {
		stages[i] = level * (i + 1);
	}
}


void Gugu::change(int level) {
	this->level = level;
	setup();
}

void Gugu::show() {
	for (int i = 0; i < 10; i++) cout << level << " x " << (i + 1) << "	: " << stages[i] << endl;
}


int main() {

	// Person Example

	/*
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "Father : ";
		father.show();
	cout << "Daughter : ";
		daughter.show();

	daughter.changeName("Grace");

	cout << "Father : " ;
		father.show();
	cout << "Daughter : ";
		daughter.show();
	*/


	// Gugudan Example


	Gugu g1(2);
	Gugu g2(g1);

	cout << "Before Changing" << endl;

	g2.show();

	g2.change(5);


	cout << "After Changing" << endl;
	g2.show();



	return 0;
}