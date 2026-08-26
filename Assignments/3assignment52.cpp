#include<iostream>
using namespace std;

void ProcessOrder(int stock, int quantity)
{
    int remainingStock;

    if(stock < 0 || quantity <= 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(quantity > stock)
    {
        cout << "Order Failed: Insufficient Stock." << endl;
        return;
    }

    remainingStock = stock - quantity;

    cout << "Order Processed Successfully." << endl;
    cout << "Remaining Stock: " << remainingStock << endl;

    if(remainingStock < 5)
    {
        cout << "Low Stock Alert!" << endl;
    }

    return;
}

int main()
{
    int stock;
    int quantity;

    cout << "Enter current stock: ";
    cin >> stock;

    cout << "Enter requested quantity: ";
    cin >> quantity;

    ProcessOrder(stock, quantity);

    return 0;
}