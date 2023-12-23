#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year to check leap or not:-";
    cin>>year;
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        cout<<"Entered year is leap year: "<<year<<endl;
    }
    else{
        cout<<"Entered year is not leap year: "<<year<<endl;
    }
}