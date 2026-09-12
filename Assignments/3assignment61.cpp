#include<iostream>
using namespace std;

int MaxDiagonal(int Arr[][50], int iRow, int iCol)
{
    int iMax = Arr[0][0];

    for(int i = 0, j = iCol - 1; i < iRow; i++, j--)
    {
        if(Arr[i][i] > iMax)
        {
            iMax = Arr[i][i];
        }

        if(Arr[i][j] > iMax)
        {
            iMax = Arr[i][j];
        }
    }

    return iMax;
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

    int iRet = MaxDiagonal(Arr, iRow, iCol);

    cout << "Largest number from both diagonals : " << iRet << endl;

    return 0;
}