#include <iostream>
using namespace std;
class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c2) {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
    void display() {
        cout << real << "+" << imag << "i" << endl;
    }
};
int main() {
    Complex c1(3, 4), c2(5, 6), c3;
    c3 = c1 + c2;
    cout << "Result: ";
    c3.display();
    return 0;
}
