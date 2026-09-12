#include<iostream>
using namespace std;

void SwapRows(int Arr[][50], int iRow, int iCol)
{
    for(int i = 0; i < iRow - 1; i = i + 2)
    {
        for(int j = 0; j < iCol; j++)
        {
            int iTemp = Arr[i][j];
            Arr[i][j] = Arr[i + 1][j];
            Arr[i + 1][j] = iTemp;
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

    SwapRows(Arr, iRow, iCol);

    cout << "Matrix after swapping consecutive rows : " << endl;

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