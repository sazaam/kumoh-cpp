

#include <string>
#include <iostream>



#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


// HELPERS
int randRange(int min, int max) { return min + (rand() % (max - min + 1)); }
void precise() { cout << fixed; cout.precision(1); }


template <class T>
class RandomMixer {
    int len = 10, min = 0, max = 20;
public:
    void mixer() {
        int l = len; precise();
        while (l--) cout << (T)randRange(min, max - 1) << " "; 
        cout << endl;
    };
};




template <class T>
class Person {
    T h;
    string n;
public:
    void setHeight(string name, T height) { n = name;h = height; };
    T trace() { return h;}
    void show() { cout << n << " " << trace() << endl; }
    void showByDouble() { precise(); cout << (double) trace() << endl; }
    void showByInt() { cout << (int) trace() << endl; }
};


class FJ {
    string name;
    double mix;
public:
    FJ(string name = "", double quant = 0.0) {
        this-> name = name;
        this-> mix = quant;
    }

    void show() { precise(); cout << name << " " << mix << endl; }
    friend FJ operator+(FJ a, FJ b) { return FJ(a.name + b.name, (a.mix + b.mix) /2); }
    friend FJ operator+(FJ a, double b) { return FJ(a.name, a.mix + b); }
    FJ& operator++(int x) { mix++; return *this;}
};
typedef class FJ Fruit_Juice;





int main() {

    // Problem #1
    
	srand((unsigned int)time(NULL));

    /*
    RandomMixer<int> i_mixer;
    RandomMixer<double> d_mixer;
    i_mixer.mixer();
    i_mixer.mixer();
    d_mixer.mixer();
    d_mixer.mixer();
    
    */


    // Problem #2
    /*
    Fruit_Juice apple_juice("Apple", 1.0);
    Fruit_Juice peach_juice("Peach", 2.0);
    Fruit_Juice mixed_juice;
    apple_juice.show();
    peach_juice.show();
    mixed_juice = apple_juice + peach_juice;
    mixed_juice.show();
    mixed_juice++;
    mixed_juice.show();
    apple_juice = apple_juice + 3.0;
    apple_juice.show();
    */



    // Problem #3
    /*
    Person<int> p1;
    Person<double> p2;
    p1.setHeight("p1", 160);
    p2.setHeight("p2", 150.5);
    p1.show();
    p2.show();
    p1.showByDouble(); //height를 double형(소수점) 출력
    p2.showByInt(); //height를 int형으로(소수점없이) 출력
    */



	return 0;
}