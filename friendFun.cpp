// friend function

#include<iostream>
using namespace std;

class Test{
    private:
    friend Test Sum(Test, Test);
    int real,img; 
    
    public: 
    void setData(int r, int i);     // declare
    void display(){
        cout<<"real number is: "<<real << " + "<<img<< " i"<<endl;
    }
    
    
};

void Test :: setData(int r, int i){
    real = r, img = i;
}
Test Sum(Test m, Test n)        // argument as object
{
    Test t;
    t.real = m.real + n.real;
    t.img = m.img + n.img;
    return t;               // return as object
}

int main()
{
    Test a,b,c;
    a.setData(12,4);
    b.setData(18,3);
    a.display();
    b.display();
    c = Sum(a,b);
    c.display();
}