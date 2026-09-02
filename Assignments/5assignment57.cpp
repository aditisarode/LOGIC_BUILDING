#include<iostream>
using namespace std;

void CheckPalindrome(int num)
{
    int temp = num;
    int reverse = 0;

    while(temp > 0)
    {
        int digit = temp % 10;
        reverse = (reverse * 10) + digit;
        temp = temp / 10;
    }

    if(reverse == num)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not Palindrome Number" << endl;
    }
}

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    CheckPalindrome(num);

    return 0;
}