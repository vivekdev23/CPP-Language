#include <iostream>
using namespace std;
class Batsman 
{
private:
    int bcode, innings, notout, runs;
    char bname[20];
    float batavg;
    void calcavg() 
    {
        if (innings - notout != 0) {
            batavg = static_cast<float>(runs) / (innings - notout);
        } else {
            batavg = 0.0;
        }
    }
public:
    void readdata() 
    {
        cout << "Enter Batsman Code: ";
        cin >> bcode;
        cout << "Enter Batsman Name: ";
        cin.getline(bname, 20);
        cout << "Enter Innings Played: ";
        cin >> innings;
        cout << "Enter Not Outs: ";
        cin >> notout;
        cout << "Enter Runs Scored: ";
        cin >> runs;
        calcavg();
    }
    void displaydata() 
    {
        cout << "----------------------------------------------" <<endl;
        cout << "Batsman Code: " << bcode;
        cout << "\nBatsman Name: " << bname;
        cout << "\nInnings Played: " << innings;
        cout << "\nNot Outs: " << notout;
        cout << "\nRuns Scored: " << runs;
        cout << "\nBatting Average: " << batavg << std::endl;
        cout << "----------------------------------------------" <<endl;
    }
};
int main() 
{
    Batsman batsmanObj;
    batsmanObj.readdata();
    batsmanObj.displaydata();

    return 0;
}
