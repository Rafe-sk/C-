#include <iostream>
using namespace std;

 void circle(float r)
 {
    cout<<"Area of Circle is: " <<3.14*r*r <<endl;  // area of circle= pi*r²
 }

 void triangle(float b, float h)
 {
    cout<<"Area of triangle is: " <<0.5*b*h <<endl; //area of triangle=0.5 * base * height
 }


int main()
{

    float r,b,h;

    cout<<"Enter radius: "<<endl;
    cin>>r;

    cout<<"Enter base: "<<endl;
    cin>>b;

    cout<<"Enter height: "<<endl;
    cin>>h;

    circle(r); //Function for Circle

    triangle(b,h); //Function for triangle
}