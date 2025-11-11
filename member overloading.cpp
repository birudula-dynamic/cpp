#include<iostream>
using namespace std;

class adding {
private:
    int a, b;

public:
    adding() { a = 0; b = 0; }
    adding(int x, int y) { a = x; b = y; }

    void print() {
        cout << "a=" << a << " b=" << b << endl;
    }

    // Friend function declaration
    friend adding operator+(adding obj1, adding obj2);
};

// Friend function definition (outside class)
adding operator+(adding obj1, adding obj2) {
    adding temp;
    temp.a = obj1.a + obj2.a;
    temp.b = obj1.b + obj2.b;
    return temp;
}

int main() {
    adding obj1(15, 25), obj2(40, 50);
    obj1.print();
    obj2.print();

    adding obj3;
    obj3.print();

    // Using overloaded + operator with friend function
    obj3 = obj1 + obj2;

    obj3.print();

    return 0;
}

