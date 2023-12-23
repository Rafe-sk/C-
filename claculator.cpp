// Create a C++ program that implements a basic calculator. Use a class
// Calculator with methods to perform addition, subtraction, multiplication,
// and division of two numbers. The program should allow the user to input
// two numbers and select an operation to perform.

#include <iostream>
using namespace std;

class Calculator
{
    private:
    int num1,num2;
    
    public:

    void setDetails()
    {
        cout<<"Enter 1st number:";
        cin>>num1;
        cout<<"Enter 2nd number:";
        cin>>num2;
    }

    void add()
    {
        cout<<"Addition="<<num1+num2<<endl;
    }

    void sub()
    {
        cout<<"Subtraction="<<num1-num2<<endl;
    }

    void mul()
    {
        cout<<"Multiplication="<<num1*num2<<endl;
    }
    void div()
    {
        cout<<"Division="<<num1/num2<<endl;
    }
};

int main()
{
    char operation;
    cout<<"For Addition enter +\nFor Subtraction enter -\nFor Multiplication enter *\nFor Division enter /"<<endl;
    cout<<"Enter operation which you want to perform:";
    cin>>operation;

    Calculator addi,subt,mult,divi;

    if(operation=='+')
    {
        addi.setDetails();
        addi.add();
    }
    else if(operation=='-')
    {
        subt.setDetails();
        subt.sub();
    }
    else if(operation=='*')
    {
        mult.setDetails();
        mult.mul();
    }
    else if(operation=='/')
    {
        divi.setDetails();
        divi.div();
    }
    else
    {
        cout<<"Invalid Choice"<<endl;
    }
}