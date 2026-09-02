#include<iostream>
using namespace std;

int Power(int num, int power)
{
    int result = 1;

    for(int i = 1; i <= power; i++)
    {
        result = result * num;
    }

    return result;
}

void CheckArmstrong(int num)
{
    int temp = num;
    int count = 0;

    while(temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = num;
    int sum = 0;

    while(temp > 0)
    {
        int digit = temp % 10;
        sum = sum + Power(digit, count);
        temp = temp / 10;
    }

    if(sum == num)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }
}

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    CheckArmstrong(num);

    return 0;
}