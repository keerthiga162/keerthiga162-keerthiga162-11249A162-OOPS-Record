#include <iostream>
using namespace std;
class Sample {
    int x, y;
public:
    Sample(int a = 0, int b = 0) {
        x = a;
        y = b;
    }
    void operator=(Sample &obj) {
        x = obj.x;
        y = obj.y;
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};
int main() {
    Sample s1(10, 20);
    Sample s2;
    cout << "Before assignment:\n";
    cout << "s1: "; s1.display();
    cout << "s2: "; s2.display();
    s2 = s1;
    cout << "\nAfter assignment:\n";
    cout << "s1: "; s1.display();
    cout << "s2: "; s2.display();
    return 0;
}
