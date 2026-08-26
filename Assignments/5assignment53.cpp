#include<iostream>
using namespace std;

void CheckBattery(int battery)
{
    if(battery < 0 || battery > 100)
    {
        cout << "Invalid input." << endl;
        return;
    }

    cout << "Battery Percentage : " << battery << "%" << endl;

    if(battery <= 5)
    {
        cout << "Status : Critical" << endl;
    }
    else if(battery <= 15)
    {
        cout << "Status : Low" << endl;
    }
    else
    {
        cout << "Status : Normal" << endl;
    }

    return;
}

int main()
{
    int battery;

    cout << "Enter battery percentage : ";
    cin >> battery;

    CheckBattery(battery);

    return 0;
}