#include<iostream>
using namespace std;
class Test{
    //by default private
    int a; //data number
    public:
    void hello() //number fauction (method)
    {
        a=100;
        cout <<"value of a is:" <<a<<endl;
        cout<<"hello world";
    }
};
int main(){
    Test t; //object
    t.hello();
} 
