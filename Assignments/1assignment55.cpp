#include<iostream>
using namespace std;

void CalculateBill(int days)
{
    int bill;

    if(days < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    bill = days * 3000;

    if(days > 7)
    {
        bill = bill - (bill * 5 / 100);
    }

    cout << "Total Stay Duration: " << days << " days" << endl;
    cout << "Final Bill Amount: Rs." << bill << endl;

    return;
}

int main()
{
    int days;

    cout << "Enter number of days stayed: ";
    cin >> days;

    CalculateBill(days);

    return 0;
}