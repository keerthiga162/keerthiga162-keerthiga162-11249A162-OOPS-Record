#include<iostream>
using namespace std;
template<class T>
class Calc{
    T num1, num2;
    public:
    Calc(T a,T b){
        num1=a;
        num2=b;
    }
    void add(){
        cout<<"Sum="<<num1+num2<<endl;
    }
};
int main(){
    Calc<int>c1(3,5);
    c1.add();
    Calc<float>c2(2.5,3.7);
    c2.add();
}