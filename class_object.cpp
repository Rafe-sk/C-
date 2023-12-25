#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string collegename;
    string rollno;
    string name;
    int marks;

public:
    void setData(string cn, string rn, string n, int m)
    {
        collegename = cn;
        rollno = rn;
        name = n;
        marks = m;
    }

    void displayData()
    {
        cout << collegename << endl;
        cout << rollno << endl;
        cout << name << endl;
        cout << marks << endl;
    }
};

int main()
{
    Student s1, s2;
    s1.setData("ITM", "ITM001", "XYZ", 78);
    s1.displayData();
    s2.setData("ITM", "ITM002", "ABC", 79);
    s2.displayData();
}
