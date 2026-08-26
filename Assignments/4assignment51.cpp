#include<iostream>
using namespace std;

void CalculateBill(int units)
{
    int bill = 0;

    if(units < 0)
    {
        cout << "Invalid input." << endl;
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

    cout << "Total Units Consumed: " << units << endl;
    cout << "Total Electricity Bill: Rs." << bill << endl;

    return;
}

int main()
{
    int units;

    cout << "Enter units consumed: ";
    cin >> units;

    CalculateBill(units);

    return 0;
}