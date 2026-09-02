#include<iostream>
using namespace std;

void CalculateBill(int units, int weeksLate)
{
    int bill = 0;
    int penalty = 0;

    if(units < 0 || weeksLate < 0)
    {
        cout << "Invalid input" << endl;
        return;
    }

    if(units <= 100)
    {
        bill = units * 5;
    }
    else if(units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    penalty = bill * 2 / 100 * weeksLate;

    if(penalty > bill * 10 / 100)
    {
        penalty = bill * 10 / 100;
    }

    bill = bill + penalty;

    cout << "Water Bill: Rs." << bill << endl;

    return;
}

int main()
{
    int units;
    int weeksLate;

    cout << "Enter units consumed: ";
    cin >> units;

    cout << "Enter weeks late: ";
    cin >> weeksLate;

    CalculateBill(units, weeksLate);

    return 0;
}