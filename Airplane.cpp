#include <iostream>
using namespace std;
int main()
{
    int speed;
    cout << "Enter cruising speed:";
    cin >> speed;
    if (speed < 500)
    {
        cout << "Speed of airplane:" << speed << "km/h"<<endl;
        cout << "Category based on speed: Slow"<<endl;
    }
    else if (speed >= 500 && speed < 1000)
    {
        cout << "Speed of airplane:" << speed << "km/h"<<endl;
        cout << "Category based on speed: Moderate"<<endl;
    }
    else if (speed >= 1000 && speed < 1500)
    {
        cout << "Speed of airplane:" << speed << "km/h"<<endl;
        cout << "Category based on speed:Fast"<<endl;
    }
    else if(speed>= 1500)
    { 
        cout<<"Speed of airplane:"<<speed<<"km/h"<<endl;
        cout<<"Category based on speed: Supersonic"<<endl;
    }
    return 0;
}