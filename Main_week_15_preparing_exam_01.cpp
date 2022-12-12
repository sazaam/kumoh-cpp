
#include <string>
#include <iostream>

using namespace std;





class Fruit {
	int quant;
	string name;
public:
	Fruit(string name, int quant = 0) {
		this->name = name;
		this->quant = quant;
	}
	void show() {
		cout << name << " " <<  quant << endl;
	}

	Fruit& operator+=(int q) { quant += q; return *this; }
	
	Fruit& operator-=(int q) { quant -= q; return *this;}
	
	Fruit& operator++(int x) {
		quant += 1; return *this;
	}
	Fruit& operator--(int x) {
		quant -= 1; return *this;
	}

};





class MyQueue {
	int* it; // 큐 데이터를 위한 포인터
	int len; // 큐 길이
	int fr; // 제일 앞 요소의 전 위치 (초기값=-1)
	int bk; // 마지막 요소 위치 (초기값=-1)
public:
	MyQueue(int init) {
		fr = bk = -1; len = init;
		it = new int[init];
	}

	void my_insert(int d) {
		it[bk++] = d;
		cout << "yo BK " << bk << endl;
	}
	void my_delete(int& d) {
		d = it[fr++];
		cout << "yo fr " << fr << endl;
	}
	void show(){
		int l = len;
		for (int i = fr; i < bk; i++) {
			cout << it[i] << " " ;
		}
		cout << endl;
	}
};



class MCU {
public:
	string name;
	double speed;
};


class CPU : public MCU {
	int cores;
public:
	CPU(string name = "", double speed = 0, int cores = 0) {
		setup(name, speed, cores);
	}

	void setup(string name = "", double speed = 0, int cores = 0) {
		this->name = name;
		this->speed = speed;
		this->cores = cores;
	}

	void upgrade(int n) {
		cores = n;
		cout << "upgraded cores" << endl;
	};

	void upgrade(double d) {
		speed = d;
		cout << "upgraded speed" << endl;
	};

	void show() {
		cout << "CPU "<< name << " : speed : " << speed << "GHz, " << cores <<" cores" << endl;
	};

	friend CPU operator+(CPU a, CPU b) { return CPU(
			a.name + b.name, 
			a.speed + b.speed,
			a.cores + b.cores
			);}


};




int main() {
	

	cout << "Working File ...." << endl;


	// Problem #1 // !!! remember syntax for ++ (a++ or ++a differs, ++a does not take any parameters, while a++ takes any int x in method declaration)


	/*
	Fruit apple("apple"), grape("grape", 30);
	apple.show(); grape.show();
	apple++;
	grape--;
	apple.show(); grape.show();
	apple += 10;
	grape -= 5;
	apple.show(); grape.show();
	*/


	// Problem #2 // !!! Array instanciation first when initing!!!
	/*
	MyQueue q1(10); //큐 길이=10
	q1.my_insert(20);
	q1.show();
	q1.my_insert(50);
	q1.show();

	MyQueue q2 = q1;
	q2.show();
	int n;
	q2.my_delete(n);
	cout << "delete " << n << endl;
	q2.show();
	*/



	// Problem #3

	/*
	CPU cpu1 = { "i5", 3.3, 4 };
	CPU cpu2 = { "i9", 3.9, 8 };
	CPU cpu3;
	cpu1.show();
	cpu2.show();

	cpu3 = cpu1 + cpu2;
	cpu3.show();
	cpu1.upgrade(3.7);
	cpu1.show();
	cpu1.upgrade(8);
	cpu1.show();
	*/

	return 0;
}