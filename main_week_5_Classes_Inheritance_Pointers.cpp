
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class Add {
protected:
    int add(int a, int b) {return a + b;}
};

class Sub {
protected:
    int sub(int a, int b) { return a - b; }
};



// Define Main class Calc
class Calc : public Add, public Sub {
public:
    int calc(char op, int a, int b) {
        switch (op) {
        case '+':
            return add(a, b);
        case '-':
            return sub(a, b);
        }
    };
};


class BaseIO {
public:
    int mode;
};


class In: virtual public BaseIO {
public :
    int read;
};


class Out : virtual public BaseIO {
public:
    int write;
};


class InOut :public In, public Out {
public:
    bool safe;
};


/*
int main() {
    
    Calc saz;

    cout << "2 + 4 = "
        << saz.calc('+', 2, 4) << endl;

    cout << "100 - 8 = "
        << saz.calc('-', 100, 8) << endl;

   
    return 0;
}
*/



/* 'virtual' keyword declaration mode */
/* When subclasses will probably share all 'publics' that Superclass has */

/*
int main() {

    InOut ioObj;
    ioObj.read = 10;
    ioObj.write = 10;
    ioObj.safe = true;
    ioObj.mode = 5;

    return 0;
}
*/










/*  MISSION INHERITANCE & VIRTUAL SUBCLASSES DECLARATIONS */


/*
class Man {
public:
    int age = -1;
    string name;
};

class Student: virtual public Man {
public:
    int id = -1;
    string university;
};


class BBP : virtual public Man {
public:
    string position;
    int homeruns;
};


class BBPS : public BBP , public Student{

protected:

public:
    void View() {
        cout
            << "이름은 " + name + "이고 나이는 " + to_string(age) + "살입니다. \n"
            << "학교는 " + university + "이고 ID는 " + to_string(id) + "입니다. \n"
            << "포지션은 " + position + "이고 홈런 개수가 " + to_string(homeruns) + "입니다. \n"
            ;
    };

};


int main() {


    BBPS bbps;
    bbps.name = "나야구";
    bbps.age = 21;
    bbps.university = "금오공대";
    bbps.id = 20211314;
    bbps.position = "투수";
    bbps.homeruns = 13;
    bbps.View();


    return 0;
}
*/



/*  POINTERS  */


class Circ{

    double rad;
public:
    void setRadius(double r) { rad = r; };
    double getArea() {
        return rad *rad * 3.1415;
    };
};



int main() {

    const int len = 3;
    Circ arr[len];
    Circ* p;

    p = arr;


    for (int i = 0; i < len; i++) {
        p->setRadius((i+1) * 10);
        p++;
    }

    p = arr;

    for (int i = 0; i < len; i++) {
        cout << "Area of Circle #" + to_string(i) + " >>> " << p->getArea() << endl;
        p++;
    }
    
    return 0;
}



