#include<iostream>
using namespace std;



int main() {
    float salary , experience;
    cout<<"Enter your salary: ";
    cin>>salary;
    
    cout<<"Enter your experiance :";
    cin>>experience;
    if (salary > 100000)
{
    if (experience >= 10)
    {
        // Bonus = 20%
        cout<<"20% Bonus is granted";
    }
    else
    {
        // Bonus = 10%
        cout<<"10% Bonus is granted";
    }
}
else if (salary >= 50000 && salary <= 100000)
{
    if (experience >= 5)
    {
        // Bonus = 15%
        cout<<"15% Bonus is granted";
    }
    else
    {
        // Bonus = 5%
        cout<<"5% Bonus is granted";
    }
}
else
{
    if (experience >= 3)
    {
        // Bonus = 8%
        cout<<"8% Bonus is granted";
    }
    else
    {
        // No Bonus
        cout<<"No Bonus is granted";
    }
}
    return 0;
    
}