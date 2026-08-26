#include <iostream>
using namespace std;

void CalculateTax(int income)
{
    if (income < 0)
    {
        cout << "Invalid input";
        return;
    }

    double tax = 0;

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = 250000 * 0.05;
        tax += (income - 500000) * 0.20;
    }
    else
    {
        tax = 250000 * 0.05;
        tax += 500000 * 0.20;
        tax += (income - 1000000) * 0.30;
    }

    cout << "Annual Income: Rs " << income << endl;
    cout << "Total Tax Payable: Rs " << tax;
}

int main()
{
    int income;

    cout << "Enter annual income: ";
    cin >> income;

    CalculateTax(income);

    return 0;
}