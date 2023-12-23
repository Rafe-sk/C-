#include <iostream>

using namespace std;

int main()
{
    int month, starting_day, days;
    string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
    cout << "Which month : ";
    cin >> month;

    if (month == 2)
    {
        days = 28;
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        days = 31;
    }
    else
    {
        if (month > 12)
        {
            cout << "ERROR INPUT ";
            return main();
        }

        days = 30;
    }

    cout << "Starting day of the month (Monday - 1,Tuesday - 2,Wednesday - 3 ,Thursday - 4,Friday - 5 ,Saturday - 6 ,Sunday - 7)? ";
    cin >> starting_day;

    for (int i = 0; i < days; i++)
    {
        cout << months[month - 1] << " " << i + 1 << " is " << day[starting_day - 1] << "\n";
        starting_day++;
        if (starting_day > 7)
        {
            starting_day = 1;
        }
    }
}