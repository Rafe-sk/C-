#include <iostream>
using namespace std;
class Rect
{
    private:
    int area;

    public:
    Rect()
    {
        area=0;
    }
    Rect(int a,int b)
    {
        area=a*b;
    }

    void display()
    {
        cout<<"The Area is:"<<area<<endl;
    }
};

int main()
{
    Rect r1;
    Rect r2(5,10);
    r1.display();
    r2.display();
}