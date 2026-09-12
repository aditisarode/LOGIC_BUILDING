#include<iostream>
using namespace std;

void Transpose(int Arr[][50], int iRow, int iCol)
{
    for(int i = 0; i < iCol; i++)
    {
        for(int j = 0; j < iRow; j++)
        {
            cout << Arr[j][i] << " ";
        }

        cout << endl;
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

    cout << "Transpose of matrix : " << endl;

    Transpose(Arr, iRow, iCol);

    return 0;
}