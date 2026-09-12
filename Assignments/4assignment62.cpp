#include<iostream>
using namespace std;

bool ChkIdentity(int Arr[][50], int iRow, int iCol)
{
    if(iRow != iCol)
    {
        return false;
    }

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            if(i == j)
            {
                if(Arr[i][j] != 1)
                {
                    return false;
                }
            }
            else
            {
                if(Arr[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }

    return true;
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

    bool bRet = ChkIdentity(Arr, iRow, iCol);

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