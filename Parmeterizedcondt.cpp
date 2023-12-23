#include <iostream>
using namespace std;

class Wall
{
private:
    int length;
    int height;

public:
    Wall(int l,int h)
    {
        length=l;
        height=h;
    }

    int calculateArea()
    {
        return length*height;
    }
};

int main()
{
    Wall wall1(5,7);
    Wall wall2(9,7);

    cout<<"Area of wall 1:"<<wall1.calculateArea()<<endl;
    cout<<"Area of wall 2:"<<wall2.calculateArea()<<endl;
}