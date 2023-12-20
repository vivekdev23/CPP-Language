// this pointer
#include<iostream>
using namespace std;
class Bank
{
    int bal,AccNo;
    string name;
    public:
    void SetData(int bal, string name, int AccNo){
        this->bal = bal;
        this->name = name;
        this->AccNo = AccNo;
    }
    void getData()
    {
        cout<<"Account holder name is: "<<name<<endl;
        cout<<"Account number is: "<<AccNo<<endl;
        cout<<"Account balance is: "<<bal<<endl;
    }
};

int main()
{
    Bank b;
    b.SetData(100, "Henil", 420);
    b.getData();
}