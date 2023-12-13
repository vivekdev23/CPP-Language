//function overloding 
#include<iostream>
using namespace std;

class Test {
    public:

    void add(){
        cout<<"add fun call..."<<endl;
    }

     void add(int a){
        cout<<"squre of a is :"<<a*a<<endl;
    }

     void add(int a, int b){
        cout<<"addition of a and b is :"<<a+b<<endl;
    }

     void add(int a , int b , int c){
        cout<<"addition of a, b and b is "<<a+b+c<<endl;
    }
};

int main()
{
    Test t;
    t.add();
    t.add(10);
}

//volume of solid shape
//Area of vairous shape