// Runtime Polymorphism -> pure virtual function
#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display() = 0;     // pure virtual function
    // virtual void display(){
    //     cout<<"Base class display function called"<<endl;
    // }
};

class Derived : public Base
{
    public:
    void display(){
        cout<<"Derived class display function called"<<endl;
    }
};

int main(){
    Base *p;
    Derived d;
    
    p = &d;
    p->display();

}