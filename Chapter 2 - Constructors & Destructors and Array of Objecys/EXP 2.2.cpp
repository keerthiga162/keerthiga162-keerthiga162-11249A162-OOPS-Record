#include <iostream>
using namespace std;
class Example {
private:
    int number;
public:

    Example() {
        number = 0;
        cout << "Default Constructor called. Number initialized to " << number << endl;
    }
    ~Example() {
        cout << "Destructor called. Cleaning up..." << endl;
    }
    void display() {
        cout << "Number = " << number << endl;
    }
};
int main() {
    cout << "Creating object obj1..." << endl;
    Example obj1;  
    obj1.display();
    cout << "Program ending..." << endl;
    return 0;
}
