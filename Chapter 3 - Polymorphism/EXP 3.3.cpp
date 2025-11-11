#include <iostream>
using namespace std;

class Box {
private:
    int length;
public:
    Box() : length(0) {}
    friend void printLength(Box& b);
};
void printLength(Box& b) {
    cout << "Length of the box: " << b.length << endl;
}
int main() {
    Box box;
    printLength(box);  
    return 0;
}

