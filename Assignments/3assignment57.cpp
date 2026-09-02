#include<iostream>
using namespace std;

void CheckPerfect(int num)
{
    int sum = 0;

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
    {
        cout << "Perfect Number" << endl;
    }
    else
    {
        cout << "Not Perfect Number" << endl;
    }
}

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    CheckPerfect(num);

    return 0;
}