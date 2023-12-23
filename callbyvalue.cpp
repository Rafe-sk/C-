
#include <iostream>
using namespace std;

int add(int n);

int main()
{
    int num=2,num1;
    cout<<"The value of num before calling is: "<<num<<endl;
    num1=add(num);
    cout<<"The value of num after calling is: "<<num1<<endl;
}

int add(int num)
{
    num=num+10;
   return num;
}

// #include <iostream>
// using namespace std;

// void add(int &n);

// int main()
// {
//     int num = 2;
//     cout << "The value of num before calling is: " << num << endl;
//     add(num);
//     cout << "The value of num after calling is: " << num << endl;
// }

// void add(int &n)
// {
//     n = n + 10;
//     cout << "The value of num in called function is: " << n << endl;
//}

// #include <iostream>
// using namespace std;

// void add(int *n);

// int main()
// {
//     int num = 2;
//     cout << "The value of num before calling is: " << num << endl;
//     add(&num);
//     cout << "The value of num after calling is: " << &num << endl;
// }

// void add(int *n)
// {
//     *n = *n + 10;
//     cout << "The value of num in called function is: " << n << endl;
// }