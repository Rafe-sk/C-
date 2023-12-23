#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char operation;
    cout << "Enter two number: ";
    cin >> a >> b;
    cout << "For addition enter + \nFor subtraction enter - \nFor multiplication enter * \nFor division enter /  " << endl;
    cout << "Enter operation: ";
    cin >> operation;
    if (operation == '+')
    {
        cout << "Sum=" << a + b << endl;
    }
    else if (operation == '-')
    {
        cout << "subtarction=" << a - b << endl;
    }
    else if (operation == '*')
    {
        cout << "multiplication=" << a * b << endl;
    }
    else if (operation == '/')
    {
        cout << "division=" << a - b << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}