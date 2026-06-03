#include <iostream>
using namespace std;

int main()
{
    int speed;
    bool hasLicense;

    cout << "Enter speed: ";
    cin >> speed;

    cout << "Has License? (1 = Yes, 0 = No): ";
    cin >> hasLicense;

    if (speed <= 60)
    {
        cout << "No Fine";
    }
    else if (speed <= 80)
    {
        if (hasLicense)
        {
            cout << "$50 Fine";
        }
        else
        {
            cout << "$150 Fine";
        }
    }
    else
    {
        if (hasLicense)
        {
            cout << "$200 Fine";
        }
        else
        {
            cout << "$500 Fine";
        }
    }

    return 0;
}