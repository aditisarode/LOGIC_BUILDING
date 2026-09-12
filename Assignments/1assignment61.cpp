#include<iostream>
using namespace std;

int AddDiagonal(int Arr[][50], int iRow, int iCol)
{
    int iSum = 0;

    for(int i = 0; i < iRow && i < iCol; i++)
    {
        iSum = iSum + Arr[i][i];
    }

    return iSum;
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

    int iRet = AddDiagonal(Arr, iRow, iCol);

    cout << "Addition of diagonal elements : " << iRet << endl;

    return 0;
}