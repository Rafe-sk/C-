// Design a C++ program to manage student records. Create a class Student
// with attributes such as name, roll number, and marks. Implement methods
// for displaying student details, adding new students, and calculating the
// average marks of all students in the record system.

#include <iostream>
using namespace std;

class Student
{
    private:
    string name;
    int roll_no;
    float sem1,sem2,percent;

    public:
    void setDetails()
    {
        cout<<"Enter the name."<<endl;
        cin>>name;
        cout<<"Enter roll no."<<endl;
        cin>>roll_no;
        cout<<"Enter sem1 marks"<<endl;
        cin>>sem1;
        cout<<"Enter sem2 marks"<<endl;
        cin>>sem2;
        percent=((sem1+sem2)*0.5);
    }

    void getData()
    {
        cout<<"Name-"<<name<<endl;
        cout<<"Roll-No-"<<roll_no<<endl;
        cout<<"Percentage-"<<percent<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter number of Students: ";
    cin>>n;

    Student arr[n];
    {
        for(int i=0;i<n;i++)
        {
            arr[i].setDetails();
            arr[i].getData();
        }
    }
}