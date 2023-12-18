// Single inheritance
#include<iostream>
using namespace std;
class Base
{
    protected:
    int a,b;
    // public:
    void SetData(){
        cout << "Enter a: ";
        cin>>a;
        cout << "Enter b: ";
        cin>>b;
    }
};

class Derived :public Base
{
    public:
    void getData(){
        Base :: SetData();
        cout<<"Product of a and b is: "<<a*b<<endl;
    }
};

int main()
{
    Derived d;
    // d.SetData();
    d.getData();
}