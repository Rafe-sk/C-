#include <iostream>
using namespace std;

class A
{
public:
    int x;

    void getx()
    {
        cout << "Enter value of x:";
        cin >> x;
    }
};

// base class 2

class B
{
public:
    int y;
    void gety()
    {
        cout << "Enter value of y:";
        cin >> y;
    }
};

class C : public A, public B
// derived from A and B
{
public:
    void sum()
    {
        cout<<"Sum="<<x+y<<endl;
    }
};

int main()
{
    C obj1;

    obj1.getx();
    obj1.gety();
    obj1.sum();
    return 0;
}