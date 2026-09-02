#include<iostream>
using namespace std;

void CheckDisarium(int iNo)
{
    int iTemp = iNo;
    int iCount = 0;
    int iDigit = 0;
    int iSum = 0;

    while(iTemp != 0)
    {
        iCount++;
        iTemp = iTemp / 10;
    }

    iTemp = iNo;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;

        int iPower = 1;

        for(int i = 1; i <= iCount; i++)
        {
            iPower = iPower * iDigit;
        }

        iSum = iSum + iPower;

        iCount--;
        iTemp = iTemp / 10;
    }

    if(iSum == iNo)
    {
        cout << "Disarium Number" << endl;
    }
    else
    {
        cout << "Not Disarium Number" << endl;
    }
}

int main()
{
    int iNo;

    cout << "Enter number : ";
    cin >> iNo;

    CheckDisarium(iNo);

    return 0;
}