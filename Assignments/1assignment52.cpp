#include<iostream>
using namespace std;

void CalculateParkingFee(int hours)
{
    int fee = 0;

    if(hours < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(hours <= 2)
    {
        fee = 20;
    }
    else
    {
        fee = 20 + ((hours - 2) * 10);
    }

    if(hours > 10)
    {
        fee = fee + 50;
    }

    cout << "Total Parking Duration: " << hours << " hours" << endl;
    cout << "Total Parking Fee: Rs." << fee << endl;

    return;
}

int main()
{
    int hours;

    cout << "Enter total parking hours: ";
    cin >> hours;

    CalculateParkingFee(hours);

    return 0;
}