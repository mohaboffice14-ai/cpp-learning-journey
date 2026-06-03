#include <iostream>
using namespace std;

int main()
{
    int level, wins, losses;

    cout << "Enter Level: ";
    cin >> level;

    cout << "Enter Number of Wins: ";
    cin >> wins;

    cout << "Enter Number of Losses: ";
    cin >> losses;

    if (level >= 50)
    {
        if (wins >= 500)
        {
            if (losses < 100)
            {
                cout << "Legendary";
            }
            else
            {
                cout << "Master";
            }
        }
        else
        {
            cout << "Diamond";
        }
    }
    else if (level >= 20 && level <= 49)
    {
        if (wins >= 200)
        {
            if (losses < 50)
            {
                cout << "Platinum";
            }
            else
            {
                cout << "Gold";
            }
        }
        else
        {
            cout << "Silver";
        }
    }
    else
    {
        if (wins >= 50)
        {
            cout << "Bronze";
        }
        else
        {
            cout << "Beginner";
        }
    }

    return 0;
}