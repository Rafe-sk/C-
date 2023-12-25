#include <iostream>
using namespace std;

void add(int a,int b)
{
    cout<<"Function 1 is called"<<endl;
    cout<<"Addition is: "<<a+b<<endl<<endl;
}

void add(int a,int b,int c)
{
    cout<<"Function 2 is called"<<endl;
    cout<<"Addition is: "<<a+b+c<<endl<<endl;
}

void add( double a,int b,int c)
{
    cout<<"Function 3 is called"<<endl;
    cout<<"Addition is: "<<a+b+c<<endl<<endl;
}

int main()
{
    int a,b,c;
    double t;

    cout<<"Enter value of a: "<<endl;
    cin>>a;

    cout<<"Enter value of b: "<<endl;
    cin>>b;

    cout<<"Enter value of c: "<<endl;
    cin>>c;

    cout<<"Enter value of t: "<<endl;
    cin>>t;

    add(a,b); //function 1

    add(a,b,c); //function 2
    
    add(t,b,c); //function 3

    return 0;
}