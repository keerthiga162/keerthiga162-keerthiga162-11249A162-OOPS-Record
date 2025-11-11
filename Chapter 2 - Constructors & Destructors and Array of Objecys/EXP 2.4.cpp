#include<iostream>
using namespace std;

class Employee {
    private:
        int empid;
        string name;
        float salary;

    public:
        void setdata(int id, string n, float s) {
            empid = id;
            name = n;
            salary = s;
        }

        void display() {
            cout << "ID: " << empid;
            cout << ", Name: " << name;
            cout << ", Salary: " << salary << endl;
        }
};

int main() { 
    Employee emp[3];

    emp[0].setdata(101, "Amit", 30000);
    emp[1].setdata(102, "Sneha", 35000);
    emp[2].setdata(103, "Rahul", 40000);

    cout << "Employee Details:\n";
    for (int i = 0; i < 3; i++) {
        emp[i].display();
    }

    return 0;
}
