#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    void getDetails(){
        cout<<"Enter name and roll:";
        cin>>name>>roll;
    }
};
class Marks:public Student{
    public:
    int mark;
    void getMark(){
        cout<<"Enter mark:";
        cin>>mark;
    }
    void display(){
        cout<<"Name:"<<name<<"\nRoll:"<<roll<<"\nMark:"<<mark<<endl;
    }
};
int main(){
    Marks m;
    m.getDetails();
    m.getMark();
    m.display();
}