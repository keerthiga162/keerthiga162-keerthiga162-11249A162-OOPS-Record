#include<iostream>
using namespace std;
class Student{
    int mark;
    public:
    void getData(int m){
        mark=m;
    }
    void show(){
        cout<<"Mark="<<mark<<endl;
    }
};
int main(){
    Student *ptr=new Student;
    ptr->getData(85);
    ptr->show();
    delete ptr;
}