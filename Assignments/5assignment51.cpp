#include<iostream>
#include<string>
using namespace std;

void CalculateAmount(int amount, string membership)
{
    double discount = 0;
    double finalAmount = amount;

    if(amount <= 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(membership != "Premium" && membership != "Regular")
    {
        cout << "Invalid membership type." << endl;
        return;
    }

    if(amount > 5000)
    {
        discount = amount * 20 / 100.0;
    }
    else if(amount > 2000)
    {
        discount = amount * 10 / 100.0;
    }

    finalAmount = amount - discount;

    if(membership == "Premium")
    {
        double premiumDiscount = finalAmount * 5 / 100.0;

        discount = discount + premiumDiscount;
        finalAmount = finalAmount - premiumDiscount;
    }

    cout << "Original Amount : Rs." << amount << endl;
    cout << "Total Discount : Rs." << discount << endl;
    cout << "Final Payable Amount : Rs." << finalAmount << endl;

    return;
}

int main()
{
    int amount;
    string membership;

    cout << "Enter purchase amount : ";
    cin >> amount;

    cout << "Enter membership type : ";
    cin >> membership;

    CalculateAmount(amount, membership);

    return 0;
}