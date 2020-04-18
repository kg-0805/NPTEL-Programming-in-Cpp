#include <iostream>

#include <string>

using namespace std;

class Base {
public:                 // LINE-1

    string str = "Hello ";

};

class Derived : public Base { // LINE-2

    string name;

public:
    Derived(string s) : name(s) {}

    void print() { cout << str << name << endl; }
};

int main() {
    string s;
    cin >> s;

    Derived d(s);
    d.print();

    return 0;
}
