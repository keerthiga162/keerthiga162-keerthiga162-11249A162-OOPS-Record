#include <iostream>
using namespace std;
class Example {
private:
    int number;
public:
    Example(int n) {
        number = n;
        cout << "Parameterized Constructor called. Number initialized to " << number << endl;
    }

    ~Example() {
        cout << "Destructor called for number = " << number << endl;
    }
    void display() {
        cout << "Number = " << number << endl;
    }
};
int main() {
    cout << "Creating object obj1..." << endl;
    Example obj1(10); 
    cout << "Creating object obj2..." << endl;
    Example obj2(25);
    obj1.display();
    obj2.display();
    cout << "Program ending..." << endl;
    return 0;
}
