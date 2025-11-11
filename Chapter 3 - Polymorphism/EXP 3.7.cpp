#include <iostream>
using namespace std;
class Number {
    int x;
public:
    Number(int a) : x(a) {}
    void display() const {
        cout << "Value of x: " << x << endl;
    }
    void operator-() {
        x = -x;
    }
};
int main() {
    Number num(10);

    cout << "Before overloading operator:" << endl;
    num.display();
    -num;
    cout << "After overloading unary minus operator:" << endl;
    num.display();
    return 0;
}
