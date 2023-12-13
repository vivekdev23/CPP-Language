//constructor Overloding  
#include<iostream>
using namespace std;

class Test {
    public:

    Test()
        {
            cout<<"defualt constructore is called"<<endl;
        }
        
     Test(int x){
        cout<<"squre of x is :"<<x*x<<endl;
    }

     Test(int x, int y){
        cout<<"addition of x and y is :"<<x+y<<endl;
    }

     Test(char x){
        cout<<"character is "<<x<<endl;
    }

};

int main()
{
    Test t(5),b('A'),a(10,50),c(50,90);
}