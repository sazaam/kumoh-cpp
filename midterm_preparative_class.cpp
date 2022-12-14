#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


/* MOOUNT CLASS */
class Mount {

	string name;
	int h;


public:

	Mount(string name, int h) {
		settings(name, h);
	}

	void settings(string name, int h) {
		this->name = name;
		this->h = h;
	}

	void infos() {
		cout << name << " " << h << endl;
	}


};



/* CIRCLE CLASS */

int randRange(int min, int max) { return min + (rand() % (max - min + 1)); }

class Circle {
	int x;
	int y;
	int r;
public:

	Circle& setX(int x) {
		this->x = x;
		return *this;
	}
	Circle& setY(int y) {
		this->y = y;
		return *this;
	}
	Circle& setRadius(int r) {
		this->r = r;
		return *this;
	}
	void showProps() {
		cout << "x 좌표 = " << x << ",	y 좌표 = " << y << ",	반지름 = " << r << "원" << endl;
	}
};



/* REGULAR BOOK + LIBRARY BOOKS  CLASSES */
class Book {
	string title, author;
	int uid, price;
public:
	
	void baseSettings(string title, int price) {
		setPrice(price);
		setTitle(title);
	}

	void setPrice(int price) { this->price = price; }
	int getPrice() { return price; }
	
	void setUID(int uid) { this->uid = uid; }
	int getUID() { return uid; }
	
	void setTitle(string title) { this->title = title; }
	string getTitle() { return title; }

	void setAuthor(string author) { this->author = author; }
	string getAuthor() { return author; }
	
	void printfBook() {
		cout << getTitle() << " (" << getPrice() << "원)" << endl;
	}

};

class LibraryBook :public Book {
	int available = 1;
public:
	LibraryBook(int uid, string title, string author) :Book() {
		setUID(uid);
		setTitle(title);
		setAuthor(author);
	};

	void setAvailability(int av) { available = av; }
	bool getAvailability() { return available; }

	void rent(bool out) { // 1 if out , 0 if return ;
		
		if (!available && out) return warn(out);
		if (available && !out) return warn(out);

		available = !(out);

		return info(out);
	}
	
	void info(bool out) { cout << (out ? "	Book was successfully borrowed" : "	Book was successfully returned") << endl << endl; }

	void warn(bool out) { cout << (out ? "	This book is already rented out" : "	Book was already returned, Are you sure this book belong here?") << endl << endl; }

	void display() { cout << (getAvailability() ? "[-] " : "[X] ") << getUID() << ". " + getTitle() + " (" + getAuthor() + ") " << endl; }
};

class Library {
	
	LibraryBook books[3] = {
		LibraryBook(1, "The Lord of the Rings.", "J.R.R. Tolkien"),
		LibraryBook(2, "The Song of Ice and Fire", "George R.R. Martin"),
		LibraryBook(3, "Foundation", "Isaac Asymov") };

public:

	void display() {
		cout << "===== Library Books =====" << endl;
		for (int i = 0; i < 3; i++) books[i].display();
	}

	void displayBook(int item) {
		books[item].display();
	}

	void rent(int item, bool out) {
		books[item].rent(out);
	}
	void start() {
		display();

		int item, choice;
		cout << "\nChoose a Book by ID (0 will exit program) : ";
		cin >> item;

		if (item) {
			displayBook(item - 1);
			cout << "Do you wish to Borrow(1) or Return(2) the book: ";
			cin >> choice;

			rent(item - 1, choice == 1);

			start();
		}
	}
};


int main() {

	// MOUNTAINS Example
	
	/*
	const int n = 4;
	Mount mounts[n] = {
		Mount("지리산", 1915),
		Mount("서락산", 1708),
		Mount("백두산", 2750),
		Mount("할라산", 1947) };

	cout << "산 정보는 다음과 같습니다." << endl;
	cout << "=============================" << endl;
	for (int i = 0; i < n; i++) (mounts + i)->infos();
	cout << "=============================" << endl;
	*/
	

	// BOOKS Example

	/*
	int n = 3;
	Book* books = new Book[n];

	books[0].baseSettings("어서와 C++은 처음이지", 33000);
	books[1].baseSettings("C언어 콘서트", 28000);
	books[2].baseSettings("두근두근 C언어 수업", 3000);

	cout << "소장하고 있는 책 정보는 다음과 같습니다." << endl;
	cout << "=============================" << endl;
	for (int i = 0; i < n; i++) (books + i)->printfBook();
	cout << "=============================" << endl;
	*/

	
	// TEST RANDOM CIRCLES
	
	/*
	srand((unsigned int)time(NULL));

	int n;
	cout << "만들고자하는 원의 개수를 입력하세요: ";
	cin >> n;

	Circle* circs = new Circle[n];
	int min = 1, max = 100;
	for (int i = 0; i < n; i++) {
		(circs + i)
			->setX(randRange(min, max))
			.setY(randRange(min, max))
			.setRadius(randRange(min, max));
		(circs + i)->showProps();
	}
	*/

	Library lib = Library();

	lib.start();

}