#include<iostream>
using namespace std;

void CalculateCharge(int minutes)
{
    int charge = 0;

    if(minutes < 0)
    {
        cout << "Invalid input" << endl;
        return;
    }

    if(minutes <= 5)
    {
        charge = 0;
    }
    else if(minutes <= 15)
    {
        charge = (minutes - 5) * 1;
    }
    else
    {
        charge = (10 * 1) + ((minutes - 15) * 2);
    }

    cout << "Call Duration: " << minutes << " minutes" << endl;
    cout << "Total Call Charge: Rs." << charge << endl;

    return;
}

int main()
{
    int minutes;

    cout << "Enter call duration in minutes: ";
    cin >> minutes;

    CalculateCharge(minutes);

    return 0;
}