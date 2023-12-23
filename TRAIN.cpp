#include <iostream>
using namespace std;
int main()
{
    int speed;
    cout<<"Enter speed ";
    cin>>speed;
    if(speed>120)
    {
        cout<<"Dhire kar le bhai thuk jaayenga"<<endl;
        cout<<"Suggesting speed "<<speed-30<<endl;
    }
    else if(speed>=80 && speed<=120)
    {
        cout<<"Fine thik hai"<<endl;
         cout<<"Suggesting speed "<<speed-20<<endl;
    }
    else if(speed<80)
    {
        cout<<"OK"<<endl;
    }
    return 0;
}