#include <iostream>
using namespace std;
class B;
class A {
int a_;
public:
A(int a) : a_(a) { }
int func(const B&) const;
};
class B {
int b_;
public:
B(int b) : b_(b) { }
friend int A::func(const B&) const; // LINE-1: Write prototype of func()
};
int A::func(const B& oB) const {
return (oB.b * a ); // LINE-2: Complete the body of func()
}
int main() {
int i;
B b1(5), b2(10);
cin >> i;
const A a1(i++), a2(i);
cout << "Result: " << a1.func(b1) + a2.func(b2);
return 0;
}
