#include <iostream>
using namespace std;

class Student {
private:
    int roll_no;
    string name;
    int marks1, marks2, marks3;
    int total;
    float average;

public:
    Student(int r, string n, int m1, int m2, int m3) {
        roll_no = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
        total = marks1 + marks2 + marks3;
        average = total / 3.0;
        cout << "Student object created for " << name << endl;
    }

    void display_result() {
        cout << "\n--- Student Result ---" << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;

        if (average >= 75)
            cout << "Grade: A" << endl;
        else if (average >= 60)
            cout << "Grade: B" << endl;
        else if (average >= 50)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: Fail" << endl;
    }

    ~Student() {
        cout << "Student object for " << name << " is destroyed" << endl;
    }
};

int main() {
    Student s1(101, "Keerthi", 95, 99, 96);
    Student s2(102, "Nila", 96, 97, 98);

    s1.display_result();
    s2.display_result();

    return 0;
}
