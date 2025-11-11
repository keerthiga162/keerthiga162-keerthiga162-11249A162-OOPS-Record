#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    static int count;

public:
    Student(int r, string n) {
        rollno = r;
        name = n;
        count++; 
    }

    void display() {
        cout << "RollNo: " << rollno << endl;
        cout << "Name: " << name << endl;
    }

    static void showcount() {
        cout << "Total students: " << count << endl;
    }
};
int Student::count = 0;

int main() {
    Student s1(1, "Seetha");
    Student s2(2, "Suresh");

    s1.display();
    s2.display();
    Student::showcount();

    return 0;
}
