/*constructor ==> class name and function name both are same.
                autometically called it self after creating object
                no return type and no     return value  
                always in public section
                type -> defuclt and parameterized , copy 
*/

#include<iostream>
using namespace std;
class Test{
    int z;
    public:
    Test()  //Defualt constructor
    {
        cout<<"Defualt constructor is called."<<endl;
    }

    Test(int x )    // parameterized constructor 
    {
        z=x;
        cout<<"parameterized constructor is called."<<endl
        <<"value of x is: "<<z <<endl;
    }

    Test(Test &x)          // copyconstructor 
    {
         int m= x.z;
        cout<<"parameterized constructor is called."<<endl
        <<"value of x is: "<<m <<endl;
    }

    void hello() {
        cout<<"Hello Wolrd....";
    }
};

int main(){
    Test a(10), t(a);
}