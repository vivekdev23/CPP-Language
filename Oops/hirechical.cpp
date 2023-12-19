// hirechical inheritance

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
    int b;
    public:
    void setB(){
        cout << "Enter b: ";
        cin>>b;
    }
    void getData(){
        cout<<"Product of a and b is: "<<a*b<<endl;
    }
};
class Derived2 :public Base
{
    int c;
    public:
    void setC(){
        cout << "Enter c: ";
        cin>>c;
    }
    void getdata(){
        cout<<"Sum of a and c is: "<<a+c<<endl;
    }
};

int main()
{
    Derived1 d1;
    d1.SetA();
    d1.setB();
    d1.getData();

    Derived2 d2;
    d2.SetA();
    d2.setC();
    d2.getdata();
}