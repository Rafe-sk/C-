#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number";
    cin>>a;

    switch(a)
    {
        case 1:
        if(a>0)
        {
            cout<<"number enter is positive"<<endl;
        }
        break;

        case 2:
        if(a<0)
        {
            cout<<"number enter is negative"<<endl;
        }

        break;
        default:
        cout<<"number enter is positive"<<endl;
    }    
}