#include <iostream>
using namespace std;
float area(float r)
{
    return 3.14*r*r; 
}
float area(float b,float h)
{
    return 0.5*b*h;
}
float area(float l,float b,float h)
{
    return l*b*h;
}

int main()
{
    float radius,length,breadth,height,base;
    cout<<"Enter Radius:";
    cin>>radius;
    cout<<"Enter Length:";
    cin>>length;
    cout<<"Enter Breadth:";
    cin>>breadth;
    cout<<"Enter Height:";
    cin>>height;
    cout<<"Enter Base:";
    cin>>base;

    cout<<"Area of circle:"<<area(radius)<<endl;
    cout<<"Area of triangle:"<<area(base,height)<<endl;
    cout<<"Area of Rectangle:"<<area(length,breadth,height)<<endl;
}