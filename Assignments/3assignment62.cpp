#include<iostream>
using namespace std;

void ReverseCol(int Arr[][50], int iRow, int iCol)
{
    for(int j = 0; j < iCol; j++)
    {
        int iStart = 0;
        int iEnd = iRow - 1;

        while(iStart < iEnd)
        {
            int iTemp = Arr[iStart][j];
            Arr[iStart][j] = Arr[iEnd][j];
            Arr[iEnd][j] = iTemp;

            iStart++;
            iEnd--;
        }
    }
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

    ReverseCol(Arr, iRow, iCol);

    cout << "Matrix after reversing each column : " << endl;

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cout << Arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}