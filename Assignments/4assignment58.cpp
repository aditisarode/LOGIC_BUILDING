#include<iostream>
using namespace std;

void CheckSunny(int iNo)
{
    int iTemp = iNo + 1;
    int iFlag = 0;

    for(int i = 1; i <= iTemp; i++)
    {
        if(i * i == iTemp)
        {
            iFlag = 1;
            break;
        }
    }

    if(iFlag == 1)
    {
        cout << "Sunny Number" << endl;
    }
    else
    {
        cout << "Not Sunny Number" << endl;
    }
}

int main()
{
    int iNo;

    cout << "Enter number : ";
    cin >> iNo;

    CheckSunny(iNo);

    return 0;
}