#include <iostream>
using namespace std;
class student
{
    private:
    int adminNo;
    char sname[20];
    float eng,maths,sci,total;
    float ctotal()
    {
        return maths + sci + eng;
    }

    public:
    void TakeData(){
        cout<<"enter Admin no:";
        cin>>adminNo;
        cout<<"enter name:";
        cin>>sname;
        cout<<"enter math marks:";
        cin>>maths;
        cout<<"enter sci marks:";
        cin>>sci;
        cout<<"enter eng marks:";
        cin>>eng;

        total = ctotal();
        
    }

    void ShowData(){
        cout<<" Admin no:"<<adminNo<<endl;
        cout<<"name :"<<sname<<endl;
        cout<<" Maths marks:"<<maths<<endl;
        cout<<" science:"<<sci<<endl;
        cout<<" english:"<<eng<<endl;
        cout<<" total marks:"<<total<<endl;

    }

};

int main(){
   student s; //object
    s.TakeData();
    s.ShowData();
}

