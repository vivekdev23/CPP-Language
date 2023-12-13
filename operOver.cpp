//opertor overloading (binary & unary)

#include<iostream>
using namespace std;

class Box {
    int l,b,h;
    public:
    int volume(){
        return l*b*h;
    }
    void setData(int p, int q , int r)
{
    l=p , b=q , h=r ; 
}

Box operator+(Box &n){
    Box t;
    t.l =l+n.l;
    t.b =l+n.b;
    t.h =l+n.h;

    return t;
}

Box operator++(int){
    Box t;
    t.l =++l;
    t.b =++b;
    t.h =++h;

    return t;
}
   
};

int main()
{
   Box a,b,c,d;

   a.setData(2,2,2);
   cout<<"Volume of box A is:"<<a.volume()<<endl;

    b.setData(3,3,3);
   cout<<"Volume of box B is:"<<b.volume()<<endl;

    c= a + b;
   cout<<"Volume of box c is:"<<c.volume()<<endl;

   d = c++;
   cout<<"Volume of box d is:"<<d.volume()<<endl;
}