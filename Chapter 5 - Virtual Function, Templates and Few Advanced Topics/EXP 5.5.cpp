#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area()=0;
};
class Circle:public Shape{
    public:
    void area(){
        cout<<"Circle area="<<3.14*4*4<<endl;
    }
};
int main(){
    Shape*s;
    Circle c;
    s=&c;
    s->area();
}