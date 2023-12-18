// multiple inheriatnace

#include<iostream>
using namespace std;
class base1{
    protected:
    int a;
    public: 
    void SetA(int x){
        a = x;
    }
};
class base2{
    protected:
    int b;
    public: 
    void SetB(int x){
        b = x;
    }
};

class test : public base1, public base2
{
    public:
    int product(){
        return a * b; 
    }
};

int main()
{
    test t;
    t.SetA(12);
    t.SetB(18);
    cout<<"product of a and b is: "<<t.product();
}