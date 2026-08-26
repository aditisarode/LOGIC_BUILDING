#include <iostream>
#include <string>
using namespace std;

void calculateFine(string helmet, string license, string overspeeding)
{
    if ((helmet != "Yes" && helmet != "No") ||
        (license != "Yes" && license != "No") ||
        (overspeeding != "Yes" && overspeeding != "No"))
    {
        cout << "Invalid data";
        return;
    }

    int fine = 0;

    if (helmet == "No")
    {
        fine += 500;
    }

    if (license == "No")
    {
        fine += 1000;
    }

    if (overspeeding == "Yes")
    {
        fine += 1500;
    }

    cout << "Total Fine Amount: Rs " << fine;
}

int main()
{
    string helmet, license, overspeeding;

    cout << "Helmet worn (Yes/No): ";
    cin >> helmet;

    cout << "License available (Yes/No): ";
    cin >> license;

    cout << "Overspeeding (Yes/No): ";
    cin >> overspeeding;

    calculateFine(helmet, license, overspeeding);

    return 0;
}