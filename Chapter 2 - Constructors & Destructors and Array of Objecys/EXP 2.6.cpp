#include <iostream>
using namespace std;

class box {
    int length; 

public:
    box(int i = 0) : length(i) {}

    void compare(box b) {
        if (length > b.length)
            cout << "Current box is bigger" << endl;
        else
            cout << "Passed box is bigger or equal" << endl;
    }
    box add(box b) {
        return box(length + b.length);
    }
    void display() {
        cout << "Length: " << length << endl;
    }
};

int main() {
    box b1(10), b2(20);

    b1.compare(b2);

    box b3 = b1.add(b2); 

    b3.display();

    return 0;
}
