#include<iostream>
using namespace std;

void CalculateCharge(int weight)
{
    int charge = 0;

    if(weight <= 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(weight <= 1)
    {
        charge = 50;
    }
    else if(weight <= 5)
    {
        charge = 50 + ((weight - 1) * 20);
    }
    else
    {
        charge = 150 + ((weight - 5) * 30);
    }

    cout << "Parcel Weight: " << weight << " kg" << endl;
    cout << "Courier Charge: Rs." << charge << endl;

    return;
}

int main()
{
    int weight;

    cout << "Enter parcel weight in kg: ";
    cin >> weight;

    CalculateCharge(weight);

    return 0;
}