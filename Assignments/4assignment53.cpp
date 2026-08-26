#include<iostream>
using namespace std;

void CalculatePurchase(int budget, int N)
{
    int price;
    int count = 0;
    int remaining = budget;

    if(budget < 0 || N < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    for(int i = 1; i <= N; i++)
    {
        cout << "Enter price of item " << i << ": ";
        cin >> price;

        if(price <= 0)
        {
            cout << "Invalid price." << endl;
            return;
        }

        if(price <= remaining)
        {
            remaining = remaining - price;
            count++;
        }
        else
        {
            break;
        }
    }

    cout << "Items Purchased: " << count << endl;
    cout << "Remaining Balance: Rs." << remaining << endl;

    return;
}

int main()
{
    int budget;
    int N;

    cout << "Enter budget amount: ";
    cin >> budget;

    cout << "Enter number of items: ";
    cin >> N;

    CalculatePurchase(budget, N);

    return 0;
}