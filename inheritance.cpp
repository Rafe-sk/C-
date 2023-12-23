#include <iostream>
using namespace std;
// Base class

class Shape
{
public:
    int width;
    int height;
    int base;

    void setWidth(int w)
    {
        width = w;
    }

    void setHeight(int h)
    {
        height = h;
    }

    void setBase(int b )
    {
        base=b;
    }
};

// Derived class.

class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

class Triangle : public Shape
{
public:

    int getbase()
    {
        cout<<"Enter base:";
        cin>>base;
    }
    int getarea()
    {
        return (0.5*base*height);
    }
};

int main()
{
    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(7);

    Triangle Tri;
    Tri.setHeight(5);
    Tri.getbase();

    // Print the area.
    cout << "Total area of Rectangle:" << Rect.getArea() << endl;
    cout<<"Total area of Triangle:"<<Tri.getarea()<<endl;
    return 0;
}