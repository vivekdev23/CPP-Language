// friend function using operator overloading
#include<iostream>
using namespace std;

class Box{
    int l,b,h;
    public: 
    int volume(){
        return l*b*h;
    }
    void setData(int p, int q, int r){
        l = p, b = q, h = r;
    }
    friend Box operator+(Box m,Box n){
        Box t;
       t.l =  m.l + n.l;
       t.b =  m.b + n.b;
       t.h =  m.h + n.h;
       return t;
    }
    friend Box operator++(Box m, int){
        Box t;
       t.l =  ++m.l ;
       t.b =  ++m.b ;
       t.h =  ++m.h ;
       return t;
    }
};

int main()
{
   Box a,b,c,d;
   a.setData(2,2,2);
   cout<<"Volume of Box A is: "<<a.volume()<<endl;
   b.setData(4,4,4);
   cout<<"Volume of Box B is: "<<b.volume()<<endl;

   c = a + b;   // 5 5 5
   cout<<"Volume of Box C is: "<<c.volume()<<endl;

    d = c++;    // 6 6 6
    cout<<"Volume of Box D is: "<<d.volume()<<endl;
}