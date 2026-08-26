#include<iostream>
using namespace std;

void CalculateFine(int n)
{
    int fine = 0;

    if(n < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(n <= 7)
    {
        cout << "Returned on time. No fine applicable." << endl;
    }
    else if(n >= 8 && n <= 12)
    {
        for(int i = 8; i <= n; i++)
        {
            fine += 5;
        }

        cout << "Total fine to be paid: Rs." << fine << endl;
    }
    else
    {
        for(int i = 8; i <= 12; i++)
        {
            fine += 5;
        }

        for(int i = 13; i <= n; i++)
        {
            fine += 10;
        }

        cout << "Total fine to be paid: Rs." << fine << endl;
    }

    return;
}

int main()
{
    int n;

    cout << "Enter the total number of days the book was kept: ";
    cin >> n;

    CalculateFine(n);

    return 0;
}