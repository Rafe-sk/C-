#include <iostream>
using namespace std;
int main()
{
    cout << "hello rowdies";
    // int a;
    // a = 100;
    // cout <<endl << a ;
    // cout <<endl << &a ;
    // int b;
    // b = 50;
    // cout <<endl <<b ;
    // cout <<endl <<&b ;
    // short int sahil= 62391;
    // cout <<endl <<sahil;

    // unsigned short int prem= 62391;
    // cout <<endl<< prem;
    // int r;
    // cout << "entre number";
    // cin>>r;
    // cout<<"\n"<<r;

    float my_marks;
    cout << endl
         << " enter marks:";
    cin >> my_marks;
    cout << my_marks;

    // char name[40];
    // cout<<"enter name";
    // cin>>name;
    // cout<<name;

    // double pi =(22/7);
    // cout<<pi;

    if (my_marks >= 80)
    {
        cout << "you are pass";
    }
    else if (my_marks >= 40)
    {
        cout << "average";
    }
    else
    {
        cout << "you are fail";
    }

    return 0;
}