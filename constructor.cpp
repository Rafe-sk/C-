#include <iostream>
using namespace std;
class Employee
{
private:
    int salary;

public:
    Employee()
    {
        cout << "Default constructor is called" << endl;
        salary = 50000;
        cout << "Salary is:" << salary << endl;
    }

    Employee(int s)
    {
        cout << "Parameterized constructor is called" << endl;
        salary = s;
        cout << "Salary is:" << salary << endl;
    }
    Employee(Employee &obj)
    {
        cout << "copy constructor is called" << endl;
        salary = obj.salary;
        cout << "Salary is:" << salary << endl;
    }

    ~Employee()
    {
        cout << "Destructor is called " << endl;
    }
};

int main()
{
    Employee E1, E2(100000), E3 = E2;
}