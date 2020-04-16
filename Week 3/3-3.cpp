#include <iostream>
using namespace std;

class Point {
    mutable int x;    // LINE-1

    mutable int y;    // LINE-2
public:
    Point(int _x, int _y) : x(_x), y(_y){}

    void changePoint(int _x, int _y) const {    // LINE-3

        x = _x;
        y = _y;
    }

    void showPoint() const {    // LINE-4

        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    int x, y, cx, cy;
    cin >> x >> y >> cx >> cy;

    const Point p1(x, y);
    p1.showPoint();
    p1.changePoint(cx, cy);
    p1.showPoint();

    return 0;
}
