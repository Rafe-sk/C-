#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Entter number to check positive or not: ";
    cin>>number;
    if(number>0)
    {
        cout<<"Number entered is positive: "<<number<<endl;
    }
    else if(number<0)
    {
        cout<<"Number entered is negative: "<<number<<endl;
    }
    else{
         cout<<"Number entered is 0 "<<endl;
    }
}