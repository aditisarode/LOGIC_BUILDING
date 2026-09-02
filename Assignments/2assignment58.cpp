#include<iostream>
using namespace std;

void CheckAutomorphic(int iNo)
{
    int iSquare = 0;
    int iTemp = 0;
    int iDigit = 0;
    int iCount = 0;
    int iPower = 1;

    iTemp = iNo;
    iSquare = iNo * iNo;

    while(iTemp != 0)
    {
        iCount++;
        iTemp = iTemp / 10;
    }

    for(int i = 1; i <= iCount; i++)
    {
        iPower = iPower * 10;
    }

    iDigit = iSquare % iPower;

    if(iDigit == iNo)
    {
        cout << "Automorphic Number" << endl;
    }
    else
    {
        cout << "Not Automorphic Number" << endl;
    }
}

int main()
{
    int iNo;

    cout << "Enter number : ";
    cin >> iNo;

    CheckAutomorphic(iNo);

    return 0;
}