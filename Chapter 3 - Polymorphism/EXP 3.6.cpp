#include <iostream>
using namespace std;
class vector {
    int x, y;
public:
    vector(int a = 0, int b = 0) {
        x = a;
        y = b;
    }
    vector operator*(int scalar) {
        return vector(x * scalar, y * scalar);
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    vector v1(2, 3);
    vector v2 = v1 * 4;
    v2.display();
    return 0;
}
