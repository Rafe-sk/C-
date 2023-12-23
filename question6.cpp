#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number to check even or not:- ";
    cin>>a;
    if(a%2==0)
    {
        cout<<"Numbered entered is even:"<<a<<endl;
    }
    else{
        cout<<"Numbered entered is odd:"<<a<<endl;
    }
}