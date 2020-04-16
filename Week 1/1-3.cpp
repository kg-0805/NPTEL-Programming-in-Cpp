#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a + b;
}

void subtract(int a, int b) {
    cout << a - b;
}

void multiply(int a, int b) {
    cout << a * b;
}
void caller(int ch, int a, int b) {

    if (ch == 2)
      multiply(a,b);
  else if(ch==1)
    subtract(a,b);
    else add(a,b);
}
int main() {

    int ch, a, b;

    cin >> ch >> a >> b;

    caller(ch, a, b);

    return 0;
}
