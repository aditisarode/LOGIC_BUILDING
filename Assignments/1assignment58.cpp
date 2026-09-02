#include<iostream>
using namespace std;

void CheckNeon(int iNo)
{
    int iSquare = 0;
    int iDigit = 0;
    int iSum = 0;

    iSquare = iNo * iNo;

    while(iSquare != 0)
    {
        iDigit = iSquare % 10;
        iSum = iSum + iDigit;
        iSquare = iSquare / 10;
    }

    if(iSum == iNo)
    {
        cout << "Neon Number" << endl;
    }
    else
    {
        cout << "Not Neon Number" << endl;
    }
}

int main()
{
    int iNo;

    cout << "Enter number : ";
    cin >> iNo;

    CheckNeon(iNo);

    return 0;
}