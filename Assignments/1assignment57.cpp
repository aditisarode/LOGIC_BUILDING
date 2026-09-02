#include<iostream>
using namespace std;

int Factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

void CheckStrong(int num)
{
    int temp = num;
    int sum = 0;

    while(temp > 0)
    {
        int digit = temp % 10;
        sum = sum + Factorial(digit);
        temp = temp / 10;
    }

    if(sum == num)
    {
        cout << "Strong Number" << endl;
    }
    else
    {
        cout << "Not Strong Number" << endl;
    }
}

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    CheckStrong(num);

    return 0;
}