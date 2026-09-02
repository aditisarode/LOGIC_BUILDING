#include<iostream>
using namespace std;

void CheckHarshad(int num)
{
    int temp = num;
    int sum = 0;

    while(temp > 0)
    {
        int digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    if(num % sum == 0)
    {
        cout << "Harshad Number" << endl;
    }
    else
    {
        cout << "Not Harshad Number" << endl;
    }
}

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    CheckHarshad(num);

    return 0;
}