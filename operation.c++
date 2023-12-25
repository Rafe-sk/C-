#include <iostream>
using namespace std;
int main()
{
    int a, b, sum, sub, product, div, mod;
    cout << "enter the value of a";
    cin >> a;
    cout << "enter the value of b";
    cin >> b;

    sum=a+b;
    cout <<"sum of a and b is" <<sum <<endl;

    sub=a-b;
    cout <<"subtraction of a and b is" <<sub <<endl;

    product=a*b;
    cout <<"multiplication of a and b is" <<product <<endl;

    div=a/b;
    cout <<"division of a and b is" <<div <<endl;

    mod=a%b;
    cout <<"remainder of a and b is" <<mod <<endl;
}