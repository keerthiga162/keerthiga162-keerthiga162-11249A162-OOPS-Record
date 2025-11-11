#include<iostream>
using namespace std;
class Employee{
    string name;
    float salary;
    public:
    void getData(){
        cout<<"Enter name and salary:";
        cin>>name>>salary;
    }
    void display(){
        cout<<"Name:"<<name<<"\nSalary:"<<salary<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter number of employees:";
    cin>>n;
    Employee *emp=new Employee[n];
    for(int i=0; i<n; i++)
    emp[i].getData();
cout<<"\nEmployee Details:\n";
for(int i=0; i<n; i++)
    emp[i].display();
delete[] emp;
}