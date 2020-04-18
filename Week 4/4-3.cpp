#include<iostream>
using namespace std;
class overLoad {
public:
int a;
overLoad(int x) : a(x) { }
overLoad operator==(overLoad &o1) {
overLoad ov(0);
ov.a = (o1.a == this->a ? 1 : 0); // LINE-1
return ov;
}
};
void fun(const overLoad &o) { // LINE-2
cout << o.a << endl;
}
int main() {
int i, j, k;
cin >> i >> j >> k;
overLoad o1(i), o2(j), o3(k);
fun(o1 == o2 == o3);
return 0;
}
