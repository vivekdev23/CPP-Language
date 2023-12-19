// hybrid (virtual) inheritance

#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;
     public:
    void SetA(){
        cout << "Enter a: ";
        cin>>a;
    }
};

class Derived1 :public Base
{
    protected:
    int b;
    public:
    void setB(){
        cout << "Enter b: ";
        cin>>b;
    }
};
class Derived2 
{
    protected:
    int c;
    public:
    void setC(){
        cout << "Enter c: ";
        cin>>c;
    }
};
class ABC :public Derived1, public Derived2
{
    public:
    void getData(){
        cout<<"Product of a, b and c is: "<<a*b*c<<endl;
    }
};


int main()
{
    ABC t;
    t.SetA();
    t.setB();
    t.setC();
    t.getData();
}