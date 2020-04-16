#include <iostream>

#include <string>

using namespace std;

class Customer {

    int cust_id;

    string name;
    mutable int bill;                  // LINE-1

public:
    Customer(int _cust_id, string _name, int _bill)
        : cust_id(_cust_id), name(_name), bill(_bill) {}

    void changeBill(int s) const {    // LINE-2

        bill = s;
    }

    void display() const {            // LINE-3 

        cout << "[" << cust_id << "] " << name << " : " << bill << endl;
    }
};

int main() {
    string n;
    int c, b, cb;
    cin >> c >> n >> b >> cb;

    const Customer c1(c, n, b);
    c1.display();
    c1.changeBill(cb);
    c1.display();

    return 0;
}
