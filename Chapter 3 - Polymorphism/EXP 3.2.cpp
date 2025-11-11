#include <iostream>
using namespace std;
class Number {
    float value;
public:
    Number(float v = 0) : value(v) {}
    Number operator/(Number n) {
        if (n.value == 0) {
            cout << "Division by zero error!" << endl;
            return Number(0);
        }
        return Number(value / n.value);
    }
    void show() {
        cout << "Result: " << value << endl;
    }
};
int main() {
    Number n1(20), n2(5);
    Number n3 = n1 / n2;
    n3.show();
    return 0;
}
