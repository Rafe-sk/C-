// 13. Implement a program to check if a triangle with given sides is equilateral, isosceles, or scalene.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter sides: ";
    cin >> a >> b >> c;

    if (a == b && a == c)
    {
        cout << "Triangle is Equilateral" << endl;
    }
    else if (a == b && a != c || b == a && b != c)
    {
        cout << "Triangle is isosceles" << endl;
    }
    else
    {
        cout << "Triangle is scalene" << endl;
    }
}