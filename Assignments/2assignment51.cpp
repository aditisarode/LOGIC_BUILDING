#include<iostream>
using namespace std;

void Withdraw(int balance, int withdrawAmount)
{
    if(balance < 0 || withdrawAmount <= 0)
    {
        cout << "Transaction Failed: Invalid input." << endl;
        return;
    }

    if(withdrawAmount % 100 != 0)
    {
        cout << "Transaction Failed: Withdrawal amount must be a multiple of Rs.100." << endl;
        return;
    }

    if(withdrawAmount > 25000)
    {
        cout << "Transaction Failed: Maximum withdrawal limit is Rs.25000." << endl;
        return;
    }

    if(balance - withdrawAmount < 1000)
    {
        cout << "Transaction Failed: Minimum balance of Rs.1000 must be maintained." << endl;
        return;
    }

    balance = balance - withdrawAmount;

    cout << "Transaction Successful." << endl;
    cout << "Remaining Balance: Rs." << balance << endl;

    return;
}

int main()
{
    int balance;
    int withdrawAmount;

    cout << "Enter current balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmount;

    Withdraw(balance, withdrawAmount);

    return 0;
}