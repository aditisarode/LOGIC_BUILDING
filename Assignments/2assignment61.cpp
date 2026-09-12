#include<iostream>
using namespace std;

int Frequency(int Arr[][50], int iRow, int iCol, int iNo)
{
    int iCount = 0;

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == iNo)
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int main()
{
    int Arr[50][50];
    int iRow, iCol, iNo;

    cout << "Enter number of rows : ";
    cin >> iRow;

    cout << "Enter number of columns : ";
    cin >> iCol;

    cout << "Enter matrix : " << endl;

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cin >> Arr[i][j];
        }
    }

    cout << "Enter number : ";
    cin >> iNo;

    int iRet = Frequency(Arr, iRow, iCol, iNo);

    cout << "Frequency : " << iRet << endl;

    return 0;
}