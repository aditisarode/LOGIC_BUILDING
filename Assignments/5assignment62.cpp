#include<iostream>
using namespace std;

bool ChkSparse(int Arr[][50], int iRow, int iCol)
{
    int iZero = 0;

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == 0)
            {
                iZero++;
            }
        }
    }

    if(iZero > (iRow * iCol) / 2)
    {
        return true;
    }

    return false;
}

int main()
{
    int Arr[50][50];
    int iRow, iCol;

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

    bool bRet = ChkSparse(Arr, iRow, iCol);

    if(bRet == true)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}