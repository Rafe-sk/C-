/*Design a program to manage student grades for a classroom. Create a
class Student with attributes for student name and an array to store grades.
Implement methods for adding grades, calculating the average grade, and
displaying the student's name and grades. Use constructors and destructors
to initialize and release resources.*/

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    float marks, average, sum;
    int arr[6];

public:
    void getName()
    {
        cout << "Enter Name of the student:";
        getline(cin, name);
    }

    void setname()
    {
        cout << "Name:" << name;
    }

    void getMarks()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "Enter " << i + 1 << "th Subject of marks:";
            cin >> arr[i];
            sum = sum + arr[i];
        }
    }

    void setMarks()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "Marks of " << i + 1<<"th subject"<<endl;
            cout<<arr[i];
        }
    }

    void getAverage()
    {
        average = sum / 6;
        cout << "Average:" << average;
    }
};

int main()
{
    Student s;

    s.getName();
    s.getMarks();
    s.setname();
    cout << endl;
    s.setMarks();
    s.getAverage();
    cout << endl;
}