#include <iostream>
using namespace std;

int main()
{
    int age, marks, attendance, sportsScore;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "Enter Attendance: ";
    cin >> attendance;

    cout << "Enter Sports Score: ";
    cin >> sportsScore;

    if (age <= 25)                    // Level 1
    {
        if (marks >= 90)              // Level 2
        {
            if (attendance >= 90)     // Level 3
            {
                if (sportsScore >= 80) // Level 4
                {
                    cout << "Full Scholarship";
                }
                else
                {
                    cout << "Half Scholarship";
                }
            }
            else
            {
                cout << "Half Scholarship";
            }
        }
        else
        {
            if (sportsScore >= 90)
            {
                cout << "Sports Scholarship";
            }
            else
            {
                cout << "No Scholarship";
            }
        }
    }
    else
    {
        cout << "No Scholarship";
    }

    return 0;
}