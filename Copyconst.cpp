#include <iostream>
using namespace std;

class Wall
{
    private:
    double length;
    double height;

    public:
    Wall(double len,double hgt)
    {
        length=len;
        height=hgt;
    }

    Wall(Wall &obj)
    {
        length=obj.length;
        height=obj.height;
    }

    int calculateArea()
    {
        return length*height;
    }
};

int main()
{
    Wall wall1(50,50);
    cout<<"Area of Room1:"<<wall1.calculateArea()<<endl;

    Wall wall2=wall1;
    cout<<"Area of Room 2:"<<wall2.calculateArea()<<endl;
}