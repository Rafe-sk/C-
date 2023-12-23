#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    void getdata()
    {
        cout << "Enter value of x:";
        cin >> x;
    }
};

// derived class from base class

class Derive1 : public Base
{
public:
    int y;

    void readdata()
    {
        cout << "Enter value of y:";
        cin >> y;
    }
};

class Derive2 : public Derive1
{
private:
    int z;
public:
    void indata()
    {
        cout<<"Enter value of z:";
        cin>>z;
    }

    void product()
    {
        cout<<"Product="<<x*y*z<<endl;
    }
};

int main()
{
    Derive2 a;

    a.getdata();
    a.readdata();
    a.indata();
    a.product();
    return 0;
}