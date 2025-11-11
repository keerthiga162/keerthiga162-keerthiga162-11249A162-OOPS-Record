#include<iostream>
using namespace std;

class calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    calculator c;
    cout << "Sum of 2 ints: " << c.add(5, 10) << endl;
    cout << "Sum of 2 doubles: " << c.add(2.5, 3.7) << endl; 
    cout << "Sum of 3 ints: " << c.add(1, 2, 3) << endl;
    return 0;
}
