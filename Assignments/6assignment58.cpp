#include<iostream>
using namespace std;

void CheckTrimorphic(int iNo)
{
    int iCube = 0;
    int iTemp = iNo;
    int iCount = 0;
    int iPower = 1;
    int iDigit = 0;

    iCube = iNo * iNo * iNo;

    while(iTemp != 0)
    {
        iCount++;
        iTemp = iTemp / 10;
    }

    for(int i = 1; i <= iCount; i++)
    {
        iPower = iPower * 10;
    }

    iDigit = iCube % iPower;

    if(iDigit == iNo)
    {
        cout << "Trimorphic Number" << endl;
    }
    else
    {
        cout << "Not Trimorphic Number" << endl;
    }
}

int main()
{
    int iNo;

    cout << "Enter number : ";
    cin >> iNo;

    CheckTrimorphic(iNo);

    return 0;
}